int printStr(char *s);
int readInt(int *eP);
int printInt(int n);

int main(){

    printStr("Testing Loops and readInt\n");
   
    int n;
    printStr("Enter the number of iterations:");
    readInt(&n);
    int i;
    printStr("\nFor loop\n");
    for(i=0;i<n;i++){
        printStr("i = ");
        printInt(i);
        printStr("\n");
    }

    printStr("While loop\n");
    i=0;
    while(i<n){
        printStr("i = ");
        printInt(i);
        printStr("\n");
        i++;
    }

    printStr("Do-While loop\n");
    i=0;
    do{
        printStr("i = ");
        printInt(i);
        printStr("\n");
        i++;
    }while(i<n);

    return 0;
    
}