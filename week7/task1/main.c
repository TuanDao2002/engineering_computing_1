#include<stdio.h>
#include "myarray.h"
#include "myarray.c"
#define SIZE 5

int main(void) {
    int arr[SIZE] = {12, 7, -3, 4, 1};
    printarray(arr, SIZE);
    printreversearray(arr, SIZE);
    printf("%d\n", maximumelement(arr, SIZE));
    if (findinteger(arr, SIZE, -3)) {
        printf("Found the integer in the array\n");
    } else {
        printf("Cannot find the integer in the array\n");
    }
    return 0;
}