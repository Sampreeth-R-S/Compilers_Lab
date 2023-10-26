#include "myl.h"
long long int INT_MAX=2147483647;
long long int INT_MIN=-2147483648;
double max_float=3.402823466e+38;
double min_float=-3.402823466e+38;
#define BUFF 100
int printStr(char* s)
{
    int length=0;
    while(s[length]!='\0')length++;  //Counting length
    length++;
    __asm__ __volatile__(  //Printing string using assembly command
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(s),"d"(length)
    );
    return length-1;
}
int printInt(int n)
{
    char buff[BUFF];
    int i = 0;
    while(1)  //Extracting characters of the string and storing in buffer
    {
        if(n<0)  //Sign for negative number
        {
            buff[i++]='-';
            n=-n;
        }
        else
        {
            buff[i++]=(char)((n%10)+'0');
            n=n/10;
            if(n==0)break;
        }
    }
    int start=0;
    int end=i-1;
    if(buff[0]=='-')start=1;
    while(start<end)  //Reversing the digits into their correct place
    {
        char temp=buff[start];
        buff[start]=buff[end];
        buff[end]=temp;
        start++;
        end--;
    }
    buff[i]='\0';
    int length=i+1;  
    __asm__ __volatile__(  //Printing the buffer using assembly commands
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(buff),"d"(length)
    );
    return length-1;
}

 
int printFlt(float f)
{
    char buff[BUFF];  //buffer to store string
    int i = 0;
    long long int n=(long long int)f;  //integer part of float
    while(1)  //Loading the integer part onto the buffer
    {
        if(f<0)  
        {
            buff[i++]='-';
            f=-f;
            n=-n;
        }
        else
        {
            buff[i++]=(char)((n%10)+'0');
            n=n/10;
            if(n==0)break;
        }
    }
    int start=0;
    int end=i-1;
    if(buff[0]=='-')start=1;
    while(start<end)  //Reversing the digits to put them at the proper place
    {
        char temp=buff[start];
        buff[start]=buff[end];
        buff[end]=temp;
        start++;
        end--;
    }
    if(f<0)f=-f;
    float decimal=f-(int)f;  //decimal part of float
    long long int deci=(long long int)(decimal*100000000);
    n=deci;
    if(n>0)buff[i++]='.';
    int hasdecimal=n>0;
    start=i;
    int temp=8;
    while(temp&&hasdecimal)  //Inserting the decimal part of float into buffer
    {
        buff[i++]=(char)((n%10)+'0');
        n=n/10;
        temp--;
    }
    end=i-1;
    while(start<end)  //Reversing the digits of the decimal part
    {
        char temp=buff[start];
        buff[start]=buff[end];
        buff[end]=temp;
        start++;
        end--;
    }
    buff[i]='\0';
    int length=i+1;
    __asm__ __volatile__(  //Printing the buffer using assembly commands
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(buff),"d"(length)
    );
    return length-1;
}
/*int readInt(int *n)
{
    char buff[BUFF];
    int len=0;
    __asm__ __volatile__(
        "movl $0, %%eax \n\t"
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        :"=a"(len)
        :"S"(buff),"d"(BUFF)
    );
    if((buff[0]!='-'&&(buff[0]<'0'||buff[0]>'9')&&buff[0]!='+')||len<=0){return ERR;}
    int cur=0;
    long long int num=0;
    int sign=0;
    if(buff[0]=='-')
    {
        sign=1;
        cur++;
    }
    else if(buff[0]=='+')cur++;
    while(buff[cur]!='\n'&&buff[cur]!=' '&&buff[cur]!='\t'&&buff[cur]!='\0'&&cur<len)
    {
        if(buff[cur]<'0'||buff[cur]>'9')return ERR;
        num=num*10+(buff[cur]-'0');
        if(num>INT_MAX+10){printStr("Overflow detected\n");return ERR;}
        cur++;
    }
    if(sign)
    {
        num=-num;
        if(num<INT_MIN){printStr("Overflow detected\n");return ERR;}
    }
    else{
        if(num>INT_MAX){printStr("Overflow detected\n");return ERR;}
    }
    *n=(int)num;
    return OK;
}*/
int readInt(int *f){
    char buff[1];  //Buffer of single character to read the input character by character
    int len;
    int cap=1;
    __asm__ __volatile__(  //Reading the first character
        "movl $0, %%eax \n\t"
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        :"=a"(len)
        :"S"(buff),"d"(cap)
    );
    if((buff[0]!='-'&&(buff[0]<'0'||buff[0]>'9')&&buff[0]!='+')||len<=0){return ERR;}  //Invalid input
    int sign=0;
    if(buff[0]=='-')  //Setting the sign
    {
        sign=1;
        __asm__ __volatile__(
            "movl $0, %%eax \n\t"
            "movq $0, %%rdi \n\t"
            "syscall \n\t"
            :"=a"(len)
            :"S"(buff),"d"(cap)
        );
    }
    else if(buff[0]=='+')
    {
        sign=0;
        __asm__ __volatile__(
            "movl $0, %%eax \n\t"
            "movq $0, %%rdi \n\t"
            "syscall \n\t"
            :"=a"(len)
            :"S"(buff),"d"(cap)
        );
    }
    //char s[]="0";
    //s[0]=buff[0];
    //printStr(s);
    if(buff[0]<'0'||buff[0]>'9'||len<=0)return ERR;
    //printStr("Hello\n");
    long long num=0;//Return value
    while(buff[0]!='\n'&&buff[0]!='\t'&&buff[0]!=' '&&buff[0]!='\0'&&len>0)  //Reading each character
    {
        if(buff[0]<'0'||buff[0]>'9')return ERR;
        num=num*10+(buff[0]-'0');
        if(num>INT_MAX+10){printStr("Overflow detected\n");return ERR;}  //Dealing with overflow
        __asm__ __volatile__(
            "movl $0, %%eax \n\t"
            "movq $0, %%rdi \n\t"
            "syscall \n\t"
            :"=a"(len)
            :"S"(buff),"d"(cap)
        );
        if(len>0&&buff[0]=='.')
        {
            __asm__ __volatile__(
                "movl $0, %%eax \n\t"
                "movq $0, %%rdi \n\t"
                "syscall \n\t"
                :"=a"(len)
                :"S"(buff),"d"(cap)
            );
            while(buff[0]!='\n'&&buff[0]!='\t'&&buff[0]!=' '&&buff[0]!='\0'&&len>0)
            {
                if(buff[0]<'0'||buff[0]>'9')return ERR;
                __asm__ __volatile__(
                    "movl $0, %%eax \n\t"
                    "movq $0, %%rdi \n\t"
                    "syscall \n\t"
                    :"=a"(len)
                    :"S"(buff),"d"(cap)
                );
                
            }
            break;
        }
    }
    if(sign)  //Setting the sign
    {
        num=-num;
        if(num<INT_MIN){printStr("Overflow detected\n");return ERR;}
    }
    else{
        if(num>INT_MAX){printStr("Overflow detected\n");return ERR;}
    }
    *f=num;  //Returning the number
    return OK;
}

int readFlt(float *f)
{
    char buff[1];  //character buffer for reading the input character by character
    int len;
    int cap=1;
    __asm__ __volatile__(
        "movl $0, %%eax \n\t"
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        :"=a"(len)
        :"S"(buff),"d"(cap)
    );
    if((buff[0]!='-'&&(buff[0]<'0'||buff[0]>'9')&&buff[0]!='+')||len<=0){return ERR;}  
    int sign=0;
    if(buff[0]=='-')  //Setting the sign
    {
        sign=1;
        __asm__ __volatile__(
            "movl $0, %%eax \n\t"
            "movq $0, %%rdi \n\t"
            "syscall \n\t"
            :"=a"(len)
            :"S"(buff),"d"(cap)
        );
    }
    else if(buff[0]=='+')
    {
        sign=0;
        __asm__ __volatile__(
            "movl $0, %%eax \n\t"
            "movq $0, %%rdi \n\t"
            "syscall \n\t"
            :"=a"(len)
            :"S"(buff),"d"(cap)
        );
    }
    if(buff[0]<'0'||buff[0]>'9'||len<=0)return ERR;
    double num=0;
    int has_dot=0,has_e=0;
    while(1)//Reading the integer part
    {
        num=num*10+(buff[0]-'0');
        __asm__ __volatile__(
            "movl $0, %%eax \n\t"
            "movq $0, %%rdi \n\t"
            "syscall \n\t"
            :"=a"(len)
            :"S"(buff),"d"(cap)
        );
        if(buff[0]=='\n'||buff[0]=='\t'||buff[0]==' '||len<=0)break;
        if(buff[0]=='.'){
            has_dot=1;
            break;
        }
        if(buff[0]=='E'||buff[0]=='e')
        {
            has_e=1;
            break;
        }
        if(buff[0]<'0'||buff[0]>'9')return ERR;  //Invalid input
        if(num>max_float+10)
        {
            printStr("Overflow detected\n");  //Overflow
            return ERR;
        }
    }
    double cur=0.1;
    double decimal=0;
    int count=0;
    while(has_dot)  //Reading the decimal part(if any)
    {
        __asm__ __volatile__(
            "movl $0, %%eax \n\t"
            "movq $0, %%rdi \n\t"
            "syscall \n\t"
            :"=a"(len)
            :"S"(buff),"d"(cap)
        );
        if(buff[0]=='\n'||buff[0]=='\t'||buff[0]==' '||len<=0)break;
        if(buff[0]=='E'||buff[0]=='e')
        {
            has_e=1;
            break;
        }
        if(buff[0]<'0'||buff[0]>'9')return ERR;
        decimal=decimal+(buff[0]-'0')*cur;
        cur=cur/10;
        count++;
    }
    if(has_dot&&count==0)  //Invalid input
    {
        return ERR;
    }
    int mulfac=0;
    int sign2=0;
    if(has_e)  //Reading the exponential part(if any)
    {
        __asm__ __volatile__(
            "movl $0, %%eax \n\t"
            "movq $0, %%rdi \n\t"
            "syscall \n\t"
            :"=a"(len)
            :"S"(buff),"d"(cap)
        );
        if((buff[0]!='-'&&(buff[0]<'0'||buff[0]>'9')&&buff[0]!='+')||len<=0){return ERR;}
        if(buff[0]=='-')
        {
            sign2=1;
            __asm__ __volatile__(
                "movl $0, %%eax \n\t"
                "movq $0, %%rdi \n\t"
                "syscall \n\t"
                :"=a"(len)
                :"S"(buff),"d"(cap)
            );
        }
        else if(buff[0]=='+')
        {
            sign2=0;
            __asm__ __volatile__(
                "movl $0, %%eax \n\t"
                "movq $0, %%rdi \n\t"
                "syscall \n\t"
                :"=a"(len)
                :"S"(buff),"d"(cap)
            );
        }
        if(buff[0]<'0'||buff[0]>'9'||len<=0)return ERR;
        int has_dot2=0;
        while(1)
        {
            mulfac=mulfac*10+(buff[0]-'0');
            __asm__ __volatile__(
                "movl $0, %%eax \n\t"
                "movq $0, %%rdi \n\t"
                "syscall \n\t"
                :"=a"(len)
                :"S"(buff),"d"(cap)
            );
            if(buff[0]=='\n'||buff[0]=='\t'||buff[0]==' ')break;
            if(buff[0]=='.'){
                has_dot2=1;
                break;
            }
            if(buff[0]<'0'||buff[0]>'9')return ERR;
        }
        double exponent_dec=0;//Decimal part of the exponent
        double cur2=0.1;
        int count2=0;
        while(has_dot2)
        {
            __asm__ __volatile__(
                "movl $0, %%eax \n\t"
                "movq $0, %%rdi \n\t"
                "syscall \n\t"
                :"=a"(len)
                :"S"(buff),"d"(cap)
            );
            if(buff[0]=='\n'||buff[0]=='\t'||buff[0]==' '||len<=0)break;
            if(buff[0]<'0'||buff[0]>'9')return ERR;
            exponent_dec=exponent_dec+(buff[0]-'0')*cur;
            cur2=cur2/10;
            count2++;
        }
        if(has_dot2&&count2==0)//INvalid input
        {
            return ERR;
        }
        mulfac+=exponent_dec;
    }
    //float exponent=1;
    
    double exponent=1.0;
    for(int i=0;i<mulfac;i++)//Updating the exponent value
    {
        exponent=exponent*10.0;
        //printFlt(exponent);
        //printf("expo=%lf\n",exponent);
    }
    num+=decimal;
    if(sign2)//Updating num with exponent value
    {
        num/=exponent;
    }
    else{
        num*=exponent;
    }
    
    float retval=(float)num;
    if(sign)
    {
        retval=-retval;
    }
    //num=num*exponent;
    if(retval>max_float||retval<min_float)//Invalid input
    {
        printStr("Overflow detected\n");
        return ERR;
    }
    *f=retval;
    return OK;
}
