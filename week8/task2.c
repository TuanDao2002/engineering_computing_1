#include<stdio.h>

int intpow(int base, unsigned int exponent) {
    int result = 1;
    while(exponent > 0) {
        result *= base;
        exponent--;
    }

    return result;
}

int intpow_recursion(int base, unsigned int exponent) {
    if (exponent == 0) return 1;

    if (exponent % 2 == 0) {
        return intpow_recursion(base * base, exponent / 2);
    } else {
        return base * intpow_recursion(base * base, exponent / 2);
    }
}

int main(void) {
    int base;
    unsigned int exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%u", &exponent);

    printf("%d ^ %d = %d\n", base, exponent, intpow_recursion(base, exponent));
    return 0;
}