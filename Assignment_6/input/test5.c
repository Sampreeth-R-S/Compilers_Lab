int printStr(char *s);
int readInt(int *eP);
int printInt(int n);

int main() {
    
    int n1, n2;

    //Test conditional operators
    printStr("\nTesting Conditional Operators\n");
    n1=6,n2=6;
    printStr("n1=6,n2=6\n");
    if(n1==n2)
        printStr("n1==n2 Passed\n");
    else
        printStr("n1==n2 Failed\n");

    n1=6,n2=7;
    printStr("n1=6,n2=7\n");
    if(n1!=n2)
        printStr("n1!=n2 Passed\n");
    else
        printStr("n1!=n2 Failed\n");
    
    n1=6,n2=7;
    printStr("n1=6,n2=7\n");
    if(n1<n2)
        printStr("n1<n2 Passed\n");
    else
        printStr("n1<n2 Failed\n");

    n1=6,n2=7;
    printStr("n1=6,n2=7\n");
    if(n1<=n2)
        printStr("n1<=n2 Passed\n");
    else
        printStr("n1<=n2 Failed\n");

    n1=6,n2=7;
    printStr("n1=6,n2=7\n");
    if(n1>n2)
        printStr("n1>n2 Failed\n");
    else
        printStr("n1>n2 Passed\n");
    
    n1=6,n2=7;
    printStr("n1=6,n2=7\n");
    if(n1>=n2)
        printStr("n1>=n2 Failed\n");
    else
        printStr("n1>=n2 Passed\n");
    
    printStr("\n");


    return 0;
}
