#include<stdio.h>

int main() {
    for (int i = 33; i < 127; i++) {
        printf("%c", i); // cast int to char
        if ((i - 33 + 1) % 15 == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
    return 0;
}