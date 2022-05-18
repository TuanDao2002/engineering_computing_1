#include<stdio.h>

int main() {
    /*
    for (int i = 33; i < 127; i++) {
        printf("%c", i); // cast int to char
        if ((i - 33 + 1) % 15 == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
    }*/

    int count = 0;
    for (char c = '!'; c <= '~'; c++) {
        printf("%c ", c);
        count++;

        if (count % 15 == 0) {
            printf("\n");
        }
    }
    return 0;
}