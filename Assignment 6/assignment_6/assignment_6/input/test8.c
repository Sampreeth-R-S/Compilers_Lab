int global_var=0;
void set_global(int n)
{
    global_var=n;
}
void print_global()
{
    printStr("\nglobal_var = ");
    printInt(global_var);
    printStr("\n");
}
int main()
{
    printStr("\nTesting global variables and scope separation\n");
    print_global();
    set_global(1);
    printStr("Setting global variable global_var to 1");
    print_global();
    printStr("Declaring local variable with same name and different value\n");
    int global_var=10;
    print_global();
    printStr("\nValue of local variable global_var = ");
    printInt(global_var);
    printStr("\n");
    printStr("\n");
    printStr("Testing scope information\n");
    {
        printStr("Entering new scope\n");
        int global_var=100;
        print_global();
        printStr("Declaring local variable inside new scope with same name and different value\n");
        printStr("Value of local variable global_var inside scope = ");
        printInt(global_var);
        printStr("\n");
        printStr("Exiting new scope\n");
    }
    printStr("Value of local variable global_var = ");
    printInt(global_var);
    printStr("\n");
    printStr("Exiting main scope\n");
    return 0;
}