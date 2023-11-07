int printStr(char *s);
int readInt(int *eP);
int printInt(int n);

int main(){

    printStr("Testing Loops\n");
    printStr("For loop");
    int i;
    for(i=0;i<10;i++){
        printStr("i = ");
        printInt(i);
        printStr("\n");
    }

    printStr("While loop");
    i=0;
    while(i<10){
        printStr("i = ");
        printInt(i);
        printStr("\n");
        i++;
    }

    printStr("Do-While loop");
    i=0;
    do{
        printStr("i = ");
        printInt(i);
        printStr("\n");
        i++;
    }while(i<10);
    
}