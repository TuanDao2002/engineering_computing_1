#include <stdio.h>

int recursive_sum(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    return recursive_sum(arr, size - 1) + arr[size - 1];
}

int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The sum of array is: %d", recursive_sum(arr, size));
    return 0;
}