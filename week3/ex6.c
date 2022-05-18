#include<stdio.h>

int main() {
    int num;
    do {
        printf("Enter an integer between 1 and 15: ");
        scanf("%d", &num);
    } while(num < 1 || num > 15);

    /*
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num * 2 - 1; j++) {
            printf(" ");
            if (num >= j && num < j + i) { // left side
                printf("%2d", num - j + 1);
            } else if (num < j && num > j - i) { // right side
                printf("%2d", j - num + 1);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    */

    for (int row = 1; row <= num; row++) {
        for (int col = num; col >= 1; col--) {
            if (col > row) {
                printf("   ");
            } else {
                printf("%3d", col);
            }
        }

        for (int col = 2; col <= row; col++) {
            printf("%3d", col);   
        }

        printf("\n");
    }
    return 0;
}