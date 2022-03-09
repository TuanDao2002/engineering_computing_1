#include<stdio.h>

int main(){
    int sum = 0;
    int i;
    printf("Enter an interger: ");
    scanf("%d", &i);
    
    // not use while in this exercise
    sum += i % 10;
    i = i / 10;

    sum += i % 10;
    i = i / 10;

    sum += i % 10;
    i = i / 10;
    printf("The sum of all the digits is: %d", sum);
    return 0;
}