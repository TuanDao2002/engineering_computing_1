#include<stdio.h>
#include "myarray.h"

#define SIZE 5

// compile: gcc main.c myarray.c;./a.exe
int main(void) {
    int arr[SIZE] = {12, 7, -3, 4, 1};
    printarray(arr, SIZE);
    printreversearray(arr, SIZE);
    printf("%d\n", maximumelement(arr, SIZE));

    int num;
    printf("Enter a number to check: ");
    scanf("%d", &num);
    if (findinteger(arr, SIZE, num)) {
        printf("Found the integer in the array\n");
    } else {
        printf("Cannot find the integer in the array\n");
    }
    return 0;
}