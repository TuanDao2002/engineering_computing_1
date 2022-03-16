#include<stdio.h>

int main(){
    float result;
    printf("Enter the final result of a course: ");
    scanf("%f", &result);

    while(result < 0 || result > 100) {
        printf("Invalid result. Enter again: ");
        scanf("%f", &result);
    }

    if (result < 50) {
        printf("NN");
    } else if (result < 60) {
        printf("PA");
    } else if (result < 70) {
        printf("CR");
    } else if (result < 80) {
        printf("DI");
    } else {
        printf("HD");
    }

    printf("\n");

    return 0;
}