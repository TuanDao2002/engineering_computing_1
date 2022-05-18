#include <stdio.h>

int main() {
    int n;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("Invalid number!\n");
        }
    } while (n < 1 || n > 10);

    printf(" x |  ");
    for (int col = 1; col <= n; col++) {
        printf("%2d  ", col);
    }
    printf("\n");

    for (int col = 1; col <= n + 1; col++) {
        printf("----");
    }
    printf("\n");

    for (int row = 1; row <= n; row++) {
        printf("%2d | ", row);
        for (int col = 1; col <= n; col++) {
            printf("%3d ", col * row);
        }
        printf("\n");
    }
    return 0;
}