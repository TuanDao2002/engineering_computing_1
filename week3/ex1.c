#include<stdio.h>

int main(){
    float result;
    printf("Enter the final result of a course: ");
    scanf("%f", &result);

    while(result < 0 || result > 100) {
        printf("Invalid result. Enter again: ");
        scanf("%f", &result);
    }

    // if (result < 50) {
    //     printf("NN");
    // } else if (result < 60) {
    //     printf("PA");
    // } else if (result < 70) {
    //     printf("CR");
    // } else if (result < 80) {
    //     printf("DI");
    // } else {
    //     printf("HD");
    // }

    // printf("\n");

    if (result >= 80) {
        printf("HD");
    } else if (result >= 70) {
        printf("DI");
    } else if (result >= 60) {
        printf("CR");
    } else if (result >= 50) {
        printf("PA");
    } else {
        printf("NN");
    }

    printf("\n");

    return 0;
}