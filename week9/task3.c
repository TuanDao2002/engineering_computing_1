#include <stdio.h>

void printdigits(int i) {
    if (i == 0) {
        return;
    }

    int last_digit = i % 10;

    printdigits(i / 10);
    printf("%d ", last_digit);
}

int sumofdigits(int num) {
    if (num == 0) {
        return 0;
    }

    return sumofdigits(num / 10) + num % 10;
}

int main(){
    int integer;
    printf("Enter a positive integer: ");
    scanf("%d", &integer);

    printdigits(integer);
    printf("\n");
    printf("Sum of all digits: %d", sumofdigits(integer));
    return 0;
}