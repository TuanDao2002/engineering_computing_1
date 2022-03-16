#include<stdio.h>

int main() {
    int num, sum = 0, count = 0;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        sum += num;
        count++;
    } while(num >= 0);

    printf("Sum is %d\n", sum);
    printf("There are %d positive integers\n", count);
    return 0;
}