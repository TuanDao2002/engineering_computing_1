#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sumofintegers(int n) {
    if (n == 0) {
        return 0;
    }

    return n + sumofintegers(n - 1);
}

void printarrayelements(int* arr, int size) {
    if (size == 0) {
        return;
    }

    printarrayelements(arr, size - 1);
    printf("%d ", arr[size - 1]);
}

char* inttostring(int num, char* s) {
   
}

int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Sum of integers from 1 to %d: %d\n", n, sumofintegers(n));

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printarrayelements(arr, sizeof(arr) / sizeof(int));
    printf("\n");
    return 0;
}