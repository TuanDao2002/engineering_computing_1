#include<stdio.h>

int main() {
    int num;
    printf("Enter an integer between 1 and 15: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--) {
        for (int j = i * 2 - 1; j > 0; j--) {
            if (j + 1 - i > 0) { // descending order
                printf("%2d ", j + 1 - i);
            } else { // ascending order
                printf("%2d ", i + 1 - j);
            }
        }
        printf("\n");
    }
    return 0;
}