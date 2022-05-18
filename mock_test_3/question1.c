#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARR_SIZE 10

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    srand(time(0));
    int arr[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        arr[i] = rand() % (n + 1);
    }

    printf("Array values: ");
    printArr(arr, ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++) {
        for (int j = i + 1; j < ARR_SIZE; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("Sorted array values: ");
    printArr(arr, ARR_SIZE);

    return 0;
}