#include <stdio.h>
int main() {
    /* Different types of variables
    */
    int x = -42;
    float y = 3.14;  //Floating point number
    char c = 'a';  
    char s[20]="Team 23"; //String     
    while(y<10) {
        y = y + 1;
    }
    if (x > 0) {
        y = y * 2;
    } else {
        c = 'b';
    }

    return 0;
}
