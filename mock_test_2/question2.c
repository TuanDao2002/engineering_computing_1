#include <stdio.h>
#include <stdlib.h>

int minArray(int arr[], int size) {
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    return min;
};

double averageArray(int arr[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size;
}

void printFirstHalf(int arr[], int size) {
    int middle = size / 2;
    for (int i = 0; i < middle; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int closetNumber(int arr[], int size, int anotherNum) {
    int closetNum = arr[0];
    for (int i = 1; i < size; i++) {
        if (abs(anotherNum - arr[i]) < abs(anotherNum - closetNum)) {
            closetNum = arr[i];
        }
    }

    return closetNum;
}

int main() {
    int arr[] = {9,6,2,5,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The minimum element in the array: %d\n", minArray(arr, size));
    printf("The average value of the array: %.2f\n", averageArray(arr, size));
    printf("The first half of the array: ");
    printFirstHalf(arr, size);

    int otherNum = 8;
    printf("The closet number to %d in the array is %d", otherNum, closetNumber(arr, size, otherNum));
    return 0;
}