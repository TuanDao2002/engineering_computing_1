#include<stdio.h>
#include<math.h>
int isprime(int integer){
    if (integer <= 1) return 0;
    for (int i = 2; i < sqrt(integer) + 1; i++) {
        if (integer % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isprime(num)) {
        printf("%d is prime number", num);
    } else {
        printf("%d is not prime number", num);
    }
    
    return 0;
}