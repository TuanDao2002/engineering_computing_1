#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int arr[10];
    int min = 50, max = 100;

    // question a
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }

    // question b
    printf("The first element: %d, the last element: %d\n", arr[0], arr[9]);

    // question c
    printf("Elements in array from the last to the first: ");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // question d
    int count = 0;
    const int VALUE = 80;
    int greater_arr[10] = {0};

    for (int i = 0; i < 10; i++) {
        if (arr[i] > VALUE) {
            greater_arr[count] = arr[i];
            count++;
        }
    }

    printf("There are %d elements greater than %d\n", count, VALUE);
    for (int i = 0; i < 10; i++) {
        if (!greater_arr[i]) {
            break;
        }

        printf("%d ", greater_arr[i]);
    }
    printf("\n");

    // question e
    int smallest_value = __INT_MAX__;
    for (int i = 0; i < 10; i++) {
        if (arr[i] < smallest_value) {
            smallest_value = arr[i];
        }
    }
    printf("The smallest value is %d\n", smallest_value);

    return 0;
}