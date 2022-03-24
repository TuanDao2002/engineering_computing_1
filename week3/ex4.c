#include<stdio.h>
int main() {
    // use percent to assign the number of spaces for a variable
    printf(" x |");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", i);
    }
    printf("\n");

    // print the border line under the header
    for (int i = 1; i <= 4 * (10 + 1); i++) {
        printf("-");
    }
    printf("\n");

    // print the multiplication table
    for (int i = 1; i <= 10; i++) {
        printf("%2d |", i);

        for (int j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}