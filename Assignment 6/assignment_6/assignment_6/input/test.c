int global_var=0;
void testIncDec(float n) {
    printStr("Value passed to function = ");
    printFlt(n);
}

int main() {
    printStr("\n#### TEST 1 (Arithmetic operators on float) ####");
    float n1, n2, n3, n4;
    n1 = 300.1;
    n2 = 16.2;
    n3 = 7.3;
    n4 = -22.4;
    int global_var=1;
    printStr("\nglobal_var = ");
    printInt(global_var);
    printStr("\n");
    printStr("\n");
    printStr("\nn1 = ");
    printFlt(n1);
    printStr("\nn2 = ");
    printFlt(n2);
    printStr("\nn3 = ");
    printFlt(n3);
    printStr("\nn4 = ");
    printFlt(n4);

    float n5 = n1 + n2;
    float n6 = n1 - n2;
    float n7 = n1 * n2;
    float n8 = n1 / n2;
    //float n9 = n1 % n2;
    float n9 = 0.10;
    printStr("\nn1 + n2 = ");
    printFlt(n5);
    printStr("\nn1 - n2 = ");
    printFlt(n6);
    printStr("\nn1 * n2 = ");
    printFlt(n7);
    printStr("\nn1 / n2 = ");
    printFlt(n8);
    printStr("\nn1 % n2 = ");
    printFlt(n9);

    float n10 = -n1 + n2 - n3 + n4 + 10.5;
    float n11 = n1 * n2 / n3 + n4 - 10.6;
    float n12 = n1 + n2 * n3 / n4 - 0.7;
    float n13 = (n1 + n2) * (-n3 / n4) - 15.8;
    printStr("\n-n1 + n2 - n3 + n4 + 10 = ");
    printFlt(n10);
    printStr("\nn1 * n2 / n3 + n4 - 10 = ");
    printFlt(n11);
    printStr("\nn1 + n2 * n3 / n4 - 0 = ");
    printFlt(n12);
    printStr("\n(n1 + n2) * (n3 / n4) - 15 = ");
    printFlt(n13);
    printStr("\n-n3 = ");
    printFlt(-n3);
    printStr("\n-n4 = ");
    printFlt(-n4);

    float arr[5];
    arr[0]=0.9;
    arr[1]=1.0;
    arr[2]=2.1;
    arr[3]=3.2;
    arr[4]=4.3;
    printStr("\narr[0] = ");
    printFlt(arr[0]);
    printStr("\narr[1] = ");
    printFlt(arr[1]);
    printStr("\narr[2] = ");
    printFlt(arr[2]);
    printStr("\narr[3] = ");
    printFlt(arr[3]);
    float *ptr = &n10;
    printStr("\n*ptr = ");
    printFlt(*ptr);
    printStr("\n\n");
   
    printStr("global_var = ");
    printInt(global_var);
    printStr("\n");
    return 0;
}
