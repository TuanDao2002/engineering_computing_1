#include<stdio.h>

int main(){
    int num;
    printf("Enter an interger: ");
    scanf("%d", &num);
    
    int last_digit = num % 10;
    int middle_digit = (num / 10) % 10;
    int first_digit = num / 100;

    int sum = last_digit + middle_digit + first_digit; 
    printf("The sum of all the digits is: %d\n", sum);
    return 0;
}