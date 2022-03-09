#include<stdio.h>

int intpow(int base, unsigned int exponent) {
    printf("The result is: ");
    int result = 1;
    while(exponent > 0) {
        result *= base;
        exponent--;
    }

    return result;
}

int main(void) {
    int base;
    unsigned int exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%u", &exponent);

    printf("%d\n", intpow(base, exponent));
    return 0;
}