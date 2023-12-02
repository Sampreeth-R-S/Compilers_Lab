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
    printStr("\nTesting loops and 1-D arrays\n");
    int fact[10];
    Facts(fact, 10);
    int i;
    printStr("\nFirst 10 Factorials: ");
    for (i = 0; i < 10; i++) {
        printInt(fact[i]);
        printStr(" ");
    }
    char word[5];
    word[0] = 'b';
    word[1] = 'i';
    word[2] = 's';
    word[3] = 'o';
    word[4] = 'n';
    printStr("\nAscii values of some characters: ");
    for (i = 0; i < 5; i++) {
        printInt(word[i]);
        printStr(" ");
    }
    printStr("\n\n");
    return 0;
}
