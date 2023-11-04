#include<bits/stdc++.h>
using namespace std;
#include"translator.h"

string input, assembly_file;
AR* currentAR;
ofstream assemblyfile;
int temp_int;
int temp_char;
string temp_string;
//Register address maps

map<int,string> retReg = {{1,"al"},{4,"eax"},{8,"rax"}};//Return registers
map<int,string> arg1Reg = {{1,"dil"},{4,"edi"},{8,"rdi"}};//Arg registers
map<int,string> arg2Reg = {{1,"sil"},{4,"esi"},{8,"rsi"}};//Arg registers
map<int,string> arg3Reg = {{1,"dl"},{4,"edx"},{8,"rdx"}};//Arg registers
map<int,string> arg4Reg = {{1,"cl"},{4,"ecx"},{8,"rcx"}};//Arg registers
map<char,int> escapecharascii = {{'n',10},{'t',9},{'r',13},{'b',8},{'f',12},{'v',11},{'a',7},{'0',0}};//Escape character to ascii map

int chartoascii(string charconstant)
{
    if(charconstant.length()==3)
    {
        return (int)charconstant[1];
    }
    if(escapecharascii.count(charconstant[2])!=0)
    {
        return escapecharascii[charconstant[2]];
    }
    return (int)charconstant[2];
}

string getReg(int number, int size)
{
    if(number==1)
    {
        return "%"+arg1Reg[size];
    }
    if(number==2)
    {
        return "%"+arg2Reg[size];
    }
    if(number==3)
    {
        return "%"+arg3Reg[size];
    }
    if(number==4)
    {
        return "%"+arg4Reg[size];
    }
}

string getloc(string name)
{
    if(currentAR->disp.count(name)!=0)
    {
        return to_string(currentAR->disp[name])+"(%rbp)";
    }
    else //Global
    return name;
}
void parameter_load(string name, int number)
{
    auto s = currentST->lookup(name);
    int size = s->size;
    string type = s->type->type;
    if(type=="arr")
    {
        assemblyfile << "\t" << setw(8) << "movq";
        size=8;
    }
    else if(size==1)
    {
        assemblyfile << "\t" << setw(8) << "movb";
    }
    else if(size==4)
    {
        assemblyfile << "\t" << setw(8) << "movl";
    }
    else if(size==8)
    {
        assemblyfile << "\t" << setw(8) << "movq";
    }
    //cout<<getReg(number,size);
    //cout<<number<<endl;
    assemblyfile<<getReg(number,size)<<", "<<getloc(name)<<endl;
}

void parameter_store(string name, int number)
{
    auto s=currentST->lookup(name);
    int size = s->size;
    string type = s->type->type;
    if(type=="arr")
    {
        assemblyfile << "\t" << setw(8) << "leaq";
        size=8;
    }
    else if(size==1)
    {
        assemblyfile << "\t" << setw(8) << "movb";
    }
    else if(size==4)
    {
        assemblyfile << "\t" <<setw(8) << "movl";
    }
    else if(size==8)
    {
        assemblyfile << "\t" << setw(8) << "movq";
    }
    assemblyfile << getloc(name) << ", " << getReg(number, size)<<endl;
}

void translate(){
    assemblyfile.open(assembly_file);
    assemblyfile<<left;
    assemblyfile<<"\t.file\t\""+input+"\""<<endl;
    assemblyfile<<endl;
    if(stringconstants.size()>0)
    {
        assemblyfile<<"\t.section\t.rodata"<<endl;
        for(int i=0;i<stringconstants.size();i++)
        {
            assemblyfile<<".LC"+to_string(i)+":"<<endl;
            assemblyfile<<"\t.string\t\""+stringconstants[i]+"\""<<endl;
        }
        assemblyfile<<endl;
    }
    for(auto i:globalST->table)
    {
        if(i.value==""&&!i.is_function)
        {
            assemblyfile<<"\t.comm\t"<<i.name<<", "<<i.size<<", "<<i.size<<endl;
        }
    }
    map<int,string>labels;
    int count=0;
    int count2=0;
    //Generate function labels and goto destination labels
    for(auto &i:quads.array)
    {
        if(i.op=="label")
        {  
            labels[count2]=".LFB" + to_string(count);
            cout<<count2<<' '<<labels[count2]<<endl;
        }
        else if(i.op=="func_end")
        {
            labels[count2]=".LFE" + to_string(count);
            cout<<count2<<' '<<labels[count2]<<endl;
            count++;
        }
        
        count2++;
       
    }
    for(auto &i:quads.array)
    {
        if(i.op=="goto"||i.op=="=="||i.op=="!="||i.op=="<"||i.op==">"||i.op=="<="||i.op==">=")
        {
            if(i.result[0]!='.')
            {
                int res=stoi(i.result);
                //cout<<i.result<<endl;
                //int res=0;
                if(labels.count(res)==0)
                {
                    labels[res]=".L"+to_string(count++);
                }
            }
        }
    }

    bool textspace=false;
    string globalstring;
    int globalint,globalchar;
    string function_end;
    stack<string>params;
    count2=-1;
    for(auto i:quads.array)
    {
        count2++;
        if(i.op=="label")
        {
            if(!textspace)
            {
                assemblyfile<<"\t.text"<<endl;
                textspace=true;
            }
            currentST=globalST->lookup(i.result)->nested_table;
            currentAR=currentST->activationrecord;
            function_end=labels[count2];
            function_end[3]='E';
            //generating prologue
            assemblyfile<<"\t.globl "<<i.result<<endl;
            assemblyfile<<"\t.type "<<i.result<<", @function"<<endl;
            assemblyfile<<i.result<<":"<<endl;
            assemblyfile<<labels[count2]<<":"<<endl;
            assemblyfile<<"\t.cfi_startproc"<<endl;
            assemblyfile<<"\tpushq\t%rbp"<<endl;
            assemblyfile<<"\t.cfi_def_cfa_offset 16"<<endl;
            assemblyfile<<"\t.cfi_offset 6, -16"<<endl;
            assemblyfile<<"\tmovq\t%rsp, %rbp"<<endl;
            assemblyfile<<"\t.cfi_def_cfa_register 6"<<endl;
            assemblyfile<<"\tsubq\t$"<<-currentAR->maxdisp<<", %rsp"<<endl;
            int num=1;
            for(auto k:currentST->table)
            {
                if(k.is_parameter)
                {
                    cout<<k.name<<endl;
                    parameter_load(k.name,num);
                    num++;
                }
            }
        }
        else if(i.op=="func_end")
        {
            //Function epilogue
            cout<<count2<<endl;
            assemblyfile<<labels[count2]<<":"<<endl;
            assemblyfile<<"\tmovq\t%rbp, %rsp"<<endl;
            assemblyfile<<"\tpopq\t%rbp"<<endl;
            assemblyfile<<"\t.cfi_def_cfa 7, 8"<<endl;
            assemblyfile<<"\tret"<<endl;
            assemblyfile<<"\t.cfi_endproc"<<endl;
            assemblyfile<<"\t.size\t"<<i.result<<", .-"<<i.result<<endl;
            textspace=false;
        }
        else
        {
            if(textspace)
            {
                string op=i.op,res=i.result,arg1=i.arg1,arg2=i.arg2;
                if(labels.count(count2)!=0)
                {
                    assemblyfile<<labels[count2]<<":"<<endl;
                }
                if(op=="=")
                {
                    if(arg1[0]<='9'&&arg1[0]>='0')
                    {
                        assemblyfile<<"\tmovq\t$"<<arg1<<", "<<getloc(res)<<endl;
                    }
                    else if(arg1[0]=='\'')
                    {
                        assemblyfile<<"\t"<<"movb"<<"$"<<chartoascii(arg1)<<", "<<getloc(res)<<endl;
                    }
                    else
                    {
                        auto size=currentST->lookup(arg1)->size;
                        if(size==1)
                        {
                            assemblyfile<<"\tmovb\t"<<getloc(arg1)<<", "<<"%al"<<endl;
                            assemblyfile<<"\tmovb\t"<<"%al"<<", "<<getloc(res)<<endl;
                        }
                        if(size==4)
                        {
                            assemblyfile<<"\tmovl\t"<<getloc(arg1)<<", "<<"%eax"<<endl;
                            assemblyfile<<"\tmovl\t"<<"%eax"<<", "<<getloc(res)<<endl;
                        }
                        if(size==8)
                        {
                            assemblyfile<<"\tmovq\t"<<getloc(arg1)<<", "<<"%rax"<<endl;
                            assemblyfile<<"\tmovq\t"<<"%rax"<<", "<<getloc(res)<<endl;
                        }
                    }
                }
                if(op=="param")
                {
                    params.push(res);
                }
                if(op=="call")
                {
                    int num_parameters = params.size();
                    while(!params.empty())
                    {
                        parameter_store(params.top(),num_parameters);
                        params.pop();
                        num_parameters--;
                    }
                    assemblyfile<<"\tcall\t"<<arg1<<endl;
                    int return_size=currentST->lookup(res)->size;
                    if(return_size==1)
                    {
                        assemblyfile<<"\tmovb\t"<<"%al"<<", "<<getloc(res)<<endl;
                    }
                    if(return_size==4)
                    {
                        assemblyfile<<"\tmovl\t"<<"%eax"<<", "<<getloc(res)<<endl;
                    }
                    if(return_size==8)
                    {
                        assemblyfile<<"\tmovq\t"<<"%rax"<<", "<<getloc(res)<<endl;
                    }
                }
                if(op=="return")
                {
                    if(res!="")
                    {
                        int return_size=currentST->lookup(res)->size;
                        if(return_size==1)
                        {
                            assemblyfile<<"\tmovb\t"<<getloc(res)<<", "<<"%al"<<endl;
                        }
                        if(return_size==4)
                        {
                            assemblyfile<<"\tmovl\t"<<getloc(res)<<", "<<"%eax"<<endl;
                        }
                        if(return_size==8)
                        {
                            assemblyfile<<"\tmovq\t"<<getloc(res)<<", "<<"%rax"<<endl;
                        }
                    }
                    if(quads.array[count2].op!="func_end")
                    {
                        assemblyfile<<"\tjmp\t"<<function_end<<endl;
                    }
                }
                if(op=="goto")
                {
                    assemblyfile<<"\tjmp\t"<<labels[stoi(res)]<<endl;
                }
                if(op=="=="||op=="!="||op=="<"||op==">"||op=="<="||op==">=")
                {
                    int size=currentST->lookup(arg1)->size;
                    if(size==1)
                    {
                        assemblyfile<<"\tmovb\t"<<getloc(arg1)<<", "<<"%al"<<endl;
                        assemblyfile<<"\tcmpb\t"<<"%al, "<<getloc(arg2)<<endl;
                    }
                    if(size==4)
                    {
                        assemblyfile<<"\tmovl\t"<<getloc(arg1)<<", "<<"%eax"<<endl;
                        assemblyfile<<"\tcmpl\t"<<"%eax, "<<getloc(arg2)<<endl;
                    }
                    if(size==8)
                    {
                        assemblyfile<<"\tmovq\t"<<getloc(arg1)<<", "<<"%rax"<<endl;
                        assemblyfile<<"\tcmpq\t"<<"%rax, "<<getloc(arg2)<<endl;
                    }
                    if(op=="==")
                    {
                        assemblyfile<<"\tje\t"<<labels[stoi(res)]<<endl;
                    }
                    else if(op=="!=")
                    {
                        assemblyfile<<"\tjne\t"<<labels[stoi(res)]<<endl;
                    }
                    else if(op=="<")
                    {
                        assemblyfile<<"\tjl\t"<<labels[stoi(res)]<<endl;
                    }
                    else if(op==">")
                    {
                        assemblyfile<<"\tjg\t"<<labels[stoi(res)]<<endl;
                    }
                    else if(op=="<=")
                    {
                        assemblyfile<<"\tjle\t"<<labels[stoi(res)]<<endl;
                    }
                    else if(op==">=")
                    {
                        assemblyfile<<"\tjge\t"<<labels[stoi(res)]<<endl;
                    }
                }
                if(op=="+")
                {
                    int size=currentST->lookup(arg1)->size;
                    if(res==arg1&&arg2=="1")
                    {
                        assemblyfile<<"\tincl\t"<<getloc(arg1)<<endl;
                        continue;
                    }
                    if(size==1)
                    {
                        assemblyfile<<"\tmovb\t"<<getloc(arg1)<<", "<<"%al"<<endl;
                        assemblyfile<<"\taddb\t"<<"%al, "<<getloc(arg2)<<endl;
                        assemblyfile<<"\tmovb\t"<<"%al, "<<getloc(res)<<endl;
                    }
                    if(size==4)
                    {
                        assemblyfile<<"\tmovl\t"<<getloc(arg1)<<", "<<"%eax"<<endl;
                        assemblyfile<<"\taddl\t"<<"%eax, "<<getloc(arg2)<<endl;
                        assemblyfile<<"\tmovl\t"<<"%eax, "<<getloc(res)<<endl;
                    }
                    if(size==8)
                    {
                        assemblyfile<<"\tmovq\t"<<getloc(arg1)<<", "<<"%rax"<<endl;
                        assemblyfile<<"\taddq\t"<<"%rax, "<<getloc(arg2)<<endl;
                        assemblyfile<<"\tmovq\t"<<"%rax, "<<getloc(res)<<endl;
                    }
                }
                if(op=="-")
                {
                    if(res==arg1&&arg2=="1")
                    {
                        assemblyfile<<"\tdecl\t"<<getloc(arg1)<<endl;
                        continue;
                    }
                    int size=currentST->lookup(arg1)->size;
                    if(size==1)
                    {
                        assemblyfile<<"\tmovb\t"<<getloc(arg1)<<", "<<"%al"<<endl;
                        assemblyfile<<"\tsubb\t"<<"%al, "<<getloc(arg2)<<endl;
                        assemblyfile<<"\tmovb\t"<<"%al, "<<getloc(res)<<endl;
                    }
                    if(size==4)
                    {
                        assemblyfile<<"\tmovl\t"<<getloc(arg1)<<", "<<"%eax"<<endl;
                        assemblyfile<<"\tsubl\t"<<"%eax, "<<getloc(arg2)<<endl;
                        assemblyfile<<"\tmovl\t"<<"%eax, "<<getloc(res)<<endl;
                    }
                    if(size==8)
                    {
                        assemblyfile<<"\tmovq\t"<<getloc(arg1)<<", "<<"%rax"<<endl;
                        assemblyfile<<"\tsubq\t"<<"%rax, "<<getloc(arg2)<<endl;
                        assemblyfile<<"\tmovq\t"<<"%rax, "<<getloc(res)<<endl;
                    }
                }
                if(op=="*")
                {
                    int size=currentST->lookup(arg1)->size;
                    assemblyfile<<"\tmovl\t"<<getloc(arg1)<<", "<<"%eax"<<endl;
                    if(arg2[0]<='9'&&arg2[0]>='0')
                    {
                        assemblyfile<<"\timull\t$"<<getloc(arg2)<<", "<<"%eax"<<endl;
                    }
                    else
                    {
                        assemblyfile<<"\timull\t"<<getloc(arg2)<<", "<<"%eax"<<endl;
                    }
                    assemblyfile<<"\tmovl\t"<<"%eax, "<<getloc(res)<<endl;
                }
                if(op=="/")
                {
                    int size = currentST->lookup(arg1)->size;
                    assemblyfile<<"\tmovl\t"<<getloc(arg1)<<", "<<"%eax"<<endl;
                    assemblyfile<<"\tcdq"<<endl;
                    assemblyfile<<"\tidivl\t"<<getloc(arg2)<<endl;
                    assemblyfile<<"\tmovl\t"<<"%eax, "<<getloc(res)<<endl;
                }
                if(op=="%")
                {
                    assemblyfile<<"\tmovl\t"<<getloc(arg1)<<", "<<"%eax"<<endl;
                    assemblyfile<<"\tcdq"<<endl;
                    assemblyfile<<"\tidivl\t"<<getloc(arg2)<<endl;
                    assemblyfile<<"\tmovl\t"<<"%edx, "<<getloc(res)<<endl;
                }
                if(op=="=[]")
                {
                    auto t=currentST->lookup(arg1);
                    if(t->is_parameter)
                    {
                        assemblyfile << "\t" << setw(8) << "movl" << getloc(arg2) << ", " << "%eax" << endl;
                        assemblyfile << "\t" << setw(8) << "cltq" << endl;
                        assemblyfile << "\t" << setw(8) << "addq" << getloc(arg1) << ", " << "%rax" << endl;
                        assemblyfile << "\t" << setw(8) << "movl" << "(%rax)" << ", " << "%eax" << endl;
                        assemblyfile << "\t" << setw(8) << "movl" << "%eax" << ", " << getloc(res) << endl;
                    }
                    else
                    {
                        assemblyfile << "\t" << setw(8) << "movl" << getloc(arg2) << ", " << "%eax" << endl;
                        assemblyfile << "\t" << setw(8) << "cltq" << endl;
                        assemblyfile << "\t" << setw(8) << "movl" << currentAR->disp[arg1] << "(%rbp, %rax, 1)" << ", " << "%eax" << endl;
                        assemblyfile << "\t" << setw(8) << "movl" << "%eax" << ", " << getloc(res) << endl;
                    }
                }
                if(op=="[]=")
                {
                    auto t=currentST->lookup(res);
                    if(t->is_parameter)
                    {
                        assemblyfile << "\t" << setw(8) << "movl" << getloc(arg1) << ", " << "%eax" << endl;
                        assemblyfile << "\t" << setw(8) << "cltq" << endl;
                        assemblyfile << "\t" << setw(8) << "addq" << getloc(res) << ", " << "%rax" << endl;
                        assemblyfile << "\t" << setw(8) << "movl" << getloc(arg2) << ", " << "%ebx" << endl;
                        assemblyfile << "\t" << setw(8) << "movl" << "%ebx" << ", " << "(%rax)" << endl;
                    }
                    else
                    {
                        assemblyfile << "\t" << setw(8) << "movl" << getloc(arg1) << ", " << "%eax" << endl;
                        assemblyfile << "\t" << setw(8) << "cltq" << endl;
                        assemblyfile << "\t" << setw(8) << "movl" << getloc(arg2) << ", " << "%ebx" << endl;
                        assemblyfile << "\t" << setw(8) << "movl" << "%ebx" << ", " << currentAR->disp[res] << "(%rbp, %rax, 1)" << endl;
                    }
                }
                if(op=="= &")
                {
                    assemblyfile<<"\tleaq\t"<<getloc(arg1)<<", "<<"%rax"<<endl;
                    assemblyfile<<"\tmovq\t"<<"%rax, "<<getloc(res)<<endl;
                }
                if(op=="= *")
                {
                    assemblyfile<<"\tmovq\t"<<getloc(arg1)<<", "<<"%rax"<<endl;
                    assemblyfile<<"\tmovl\t(%rax), %eax"<<endl;
                    assemblyfile<<"\tmovl\t"<<"%eax, "<<getloc(res)<<endl;
                }
                if(op=="= -")
                {
                    assemblyfile<<"\tmovl\t"<<getloc(arg1)<<", "<<"%eax"<<endl;
                    assemblyfile<<"\tnegl\t"<<"%eax"<<endl;
                    assemblyfile<<"\tmovl\t"<<"%eax, "<<getloc(res)<<endl;
                }
                if(op=="*=")
                {
                    assemblyfile<<"\tmovl\t"<<getloc(arg1)<<", "<<"%eax"<<endl;
                    assemblyfile<<"\tmovq\t"<<getloc(res)<<", %rbx"<<endl;
                    assemblyfile << "\t" << "movl\t" << "%eax" << ", " << "(%rbx)" << endl;
                }
            }
            else//global symbols with initialisation
            {
                auto sym = currentST->lookup(i.result);
                
                if(sym->name[0]=='t'&&sym->name[1]>='0'&&sym->name[2]<='9')
                {
                    if(sym->type->type=="int")
                    {
                        //temp_int = stoi(i.arg1);
                        cout<<i.arg1<<endl;
                    }
                    if(sym->type->type=="char")
                    {
                        temp_char=chartoascii(i.arg1);
                    }
                    if(sym->type->type=="ptr")
                    {
                        temp_string=i.arg1;
                    }

                }
                else
                {
                    if(sym->type->type=="int")
                    {
                        assemblyfile << "\t" << setw(8) << ".globl" << sym->name << endl;
                        assemblyfile << "\t" << setw(8) << ".data" << endl;
                        assemblyfile << "\t" << setw(8) << ".align" << 4 << endl;
                        assemblyfile << "\t" << setw(8) << ".type" << sym->name << ", @object" << endl;
                        assemblyfile << "\t" << setw(8) << ".size" << sym->name << ", 4" << endl;
                        assemblyfile << sym->name << ":" << endl;
                        assemblyfile << "\t" << setw(8) << ".long" << temp_int << endl;
                    }
                    if(sym->type->type=="char")
                    {
                        assemblyfile << "\t" << setw(8) << ".globl" << sym->name << endl;
                        assemblyfile << "\t" << setw(8) << ".data" << endl;
                        assemblyfile << "\t" << setw(8) << ".type" << sym->name << ", @object" << endl;
                        assemblyfile << "\t" << setw(8) << ".size" << sym->name << ", 1" << endl;
                        assemblyfile << sym->name << ":" << endl;
                        assemblyfile << "\t" << setw(8) << ".byte" << temp_char << endl;
                    }
                    if(sym->type->type=="ptr")
                    {
                        assemblyfile << "\t" << ".section	.data.rel.local" << endl;
                        assemblyfile << "\t" << setw(8) << ".align" << 8 << endl;
                        assemblyfile << "\t" << setw(8) << ".type" << sym->name << ", @object" << endl;
                        assemblyfile << "\t" << setw(8) << ".size" << sym->name << ", 8" << endl;
                        assemblyfile << sym->name << ":" << endl;
                        assemblyfile << "\t" << setw(8) << ".quad" << temp_string << endl;
                    }
                }
            }
        }
        //count2++;
    }
    assemblyfile.close();

}

int main(int argc, char const*argv[])
{
    //Initialisation
    STCount = 0;
    globalST = new symTab("Global");
    currentST = globalST;
    blocktype = "";
    varType = "";
    input = string(argv[1]) + ".c";
    yyin = fopen(input.c_str(),"r");
    cout<<"hello\n";
    //Parsing
    yyparse();
    //Printing
    //globalST->update();
    list<symTab*> tableList;
    int offset=0;
    for(list<symbol>::iterator it=globalST->table.begin();it!=globalST->table.end();it++){
        if(it==globalST->table.begin()) offset = it->size;
        else{
            it->offset = offset;
            offset += it->size;
        }
        if(it->nested_table != NULL) tableList.push_back(it->nested_table);
    }
    for(auto it = tableList.begin(); it != tableList.end(); it++) {
        (*it)->activationrecord = new AR();
        (*it)->update();
        //(*it)->flatten();
    }
    globalST->print();
    cout<<endl<<endl<<endl;
    quads.print();
    for(auto it = tableList.begin(); it != tableList.end(); it++) {
        //(*it)->activationrecord = new AR();
        //(*it)->update();
        (*it)->flatten();
    }
    assembly_file = string(argv[1]) + ".s";
    currentST=globalST;
    translate();

}
