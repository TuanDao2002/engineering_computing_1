#include<stdio.h>

int solvelinear(float a, float b) {
    if (a == 0 && b != 0) return 0;
    if (a == 0 && b == 0) {
        printf("The function has infinite results!!!\n");
        return 0;
    }

    float result = (-b) / a + 0.0; // prevent negative zero
    printf("The result is: %.2f\n", result);
    return 1;
}

int main(void){
    float a, b;
    printf("Enter parameters for linear function ax + b = 0\n");

    printf("Parameter a: ");
    scanf("%f", &a);

    printf("Parameter b: ");
    scanf("%f", &b);

    if (solvelinear(a, b)) {
        printf("The function can be solved");
    } else {
        printf("The function cannot be solved");
    }

    return 0;
}