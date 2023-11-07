int fibn (int n) {
    counter++;
    global_var = counter;

    if (n == 0) {
        return 0;
    }
    else if (n == 1 || n == 2) {
        return 1;
    }
 
    // Testing recursive function
    else {
        return fibn(n - 1) + fibn(n - 2);
    }
}

int main()
{
    printStr("Testing recursive calls\n");
    printStr("Enter the value of n for fibn: ");
    int n;
    readInt(&n);
    printStr("fibn(n) = ");
    int result = fibn(n);
    printInt(result);
    printStr("\n");
    return 0;
}