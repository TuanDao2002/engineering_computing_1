#include <stdio.h>

void myFunc(int* num) {
    *num = 20;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    //Qa
    int x = 10;
    printf("x before function call: %d \n", x);
    myFunc(&x);
    printf("x after function call: %d \n", x);

    //Qb
    int n1 = 50, n2 = 60;
    printf("Values before swapping: n1 = %d, n2 = %d \n", n1, n2);
    swap(&n1, &n2);
    printf("Values after swapping: n1 = %d, n2 = %d \n", n1, n2);
    return 0;
}