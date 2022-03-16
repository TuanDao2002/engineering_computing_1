#include<stdio.h>
int main() {
    // use percent to assign the number of spaces for a variable
    printf(" x |");
    for (int i = 1; i <= 10; i++) {
        printf("%5d", i);
    }
    printf("\n");

    for (int i = 1; i < 5 * (10 + 1); i++) {
        printf("-");
    }
    printf("\n");

    int val;

    for (int i = 1; i <= 10; i++) {
        printf("%2d |", i);

        for (int j = 1; j <= 10; j++) {
            printf("%5d", i * j);
        }
        printf("\n");
    }

    return 0;
}