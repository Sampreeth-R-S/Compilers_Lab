int printStr(char *s);
int readInt(int *eP);
int printInt(int n);

int main(){
    prinStr("Testing integer arithmetic");

    int a = 5;
    int b = 10;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;

    printStr("a = ");
    printInt(a);
    printStr("\n");
    printStr("b = ");
    printInt(b);
    printStr("\n");
    printStr("a+b = ");
    printInt(c);
    printStr("\n");
    printStr("a-b = ");
    printInt(d);
    printStr("\n");
    printStr("a*b = ");
    printInt(e);
    printStr("\n");
    printStr("a/b = ");
    printInt(f);
    printStr("\n");
    printStr("a%b = ");
    printInt(g);
    printStr("\n");


}