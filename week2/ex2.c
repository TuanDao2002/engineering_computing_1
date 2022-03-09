#include<stdio.h>

int main() {
    float vnd, usd;
    printf("Enter the amount of VND: ");
    scanf("%f", &vnd);
    usd = vnd / 23150;
    printf("The amount of USD is: %.2f$", usd);
    return 0;
}