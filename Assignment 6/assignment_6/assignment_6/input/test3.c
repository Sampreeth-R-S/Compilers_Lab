int printStr(char *s);
int readInt(int *eP);
int printInt(int n);


int glob_var;
int testInt(int num) {
    int x=2*num;
    return x;
}

int *testIntPtr(int *numPtr) {
    int *xPtr=numPtr;
    *xPtr=2*(*xPtr);
    return xPtr;
}

char testChar(char c) {
    return c;
}

char *testCharPtr(char *cPtr) {
    return cPtr;
}

void setVar() {
    glob_var = 6;
    return;
}


int main() {
    printStr("Test function calls and returns\n");
    int n = 6;
    int *nPtr = &n;
    
    int rInt=testInt(n);
    if(rInt==12)
        printStr("Integer return works fine\n");
    else
        printStr("Integer return failed\n");
    
    int *rIntPtr=testIntPtr(nPtr);
    if(*rIntPtr==12)
        printStr("Integer pointer return works fine\n");
    else
        printStr("Integer pointer return failed\n");

    char c = 'b';
    char rChar=testChar(c);
    if(rChar==c)
        printStr("Char return works fine\n");
    else
        printStr("Char return failed\n");
    char *cPtr = &c;
    
    char *retCharPtr = testCharPtr(cPtr);
    if (retCharPtr == cPtr) {
        printStr("Char pointer return works fine\n");
    } else {
        printStr("Char pointer return failed\n");
    }

    char *str = "Sample String";
    char *retStr = testCharPtr(str);
    if (retStr == str) 
        printStr("String return works fine");
    else
        printStr("String return failed");
    
    
    setVar();
    if (glob_var == 6) 
        printStr("Global variable works fine");
    else
        printStr("Global variable failed");
    
    printStr("\n\n");
    return 0;
}
