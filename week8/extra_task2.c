#include<stdio.h>

int reverseinteger(int num) {
    int reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    return reverse;
}

int main(void) {
    int integer;
    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("The reverse of the integer is: %d", reverseinteger(integer));
    return 0;
}