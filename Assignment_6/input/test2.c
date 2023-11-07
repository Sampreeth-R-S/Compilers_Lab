int printStr(char *s);
int readInt(int *eP);
int printInt(int n);

void Facts(int *fact, int n) {
    int i;
    fact[0]=1;
    fact[1]=1;
    for (i = 2; i < n; i++) {
        fact[i] = fact[i-1]*i;
    }
}

int main() {
    printStr("\n#### TEST 2 (1-D Arrays) ####");
    int fact[10];
    Facts(fact, 10);
    int i;
    printStr("\nFirst 10 Factorials: ");
    for (i = 0; i < 10; i++) {
        printInt(fact[i]);
        printStr(" ");
    }
    char vowels[5];
    vowels[0] = 'a';
    vowels[1] = 'e';
    vowels[2] = 'i';
    vowels[3] = 'o';
    vowels[4] = 'u';
    printStr("\nAscii values of vowels: ");
    for (i = 0; i < 5; i++) {
        printInt(vowels[i]);
        printStr(" ");
    }
    printStr("\n\n");
    return 0;
}
