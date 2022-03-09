#include<stdio.h>

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min, min_index;

    for (int j = 0; j < 5; j++) {
        min = arr[j];
        min_index = j;
        for (int k = j + 1; k < 5; k++) {
            if (arr[k] < min) {
                min = arr[k];
                min_index = k;
            }
        }

        if (min != arr[j])  {
            arr[min_index] = arr[j];
            arr[j] = min;
        }
    }

    printf("Ascending order: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}