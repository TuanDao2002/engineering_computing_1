#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    const int SIZE = 10;
    int arr[SIZE];
    const int MIN = 50, MAX = 100;

    // question a
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }

    // question b
    printf("The first element: %d, the last element: %d\n", arr[0], arr[SIZE - 1]);

    // question c
    printf("Elements in array from the last to the first: ");
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // question d
    int count = 0;
    const int VALUE = 80;
    int greater_arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > VALUE) {
            greater_arr[i] = arr[i];
            count++;
        } else {
            greater_arr[i] = -1;
        }
    }

    printf("There are %d elements greater than %d\n", count, VALUE);
    for (int i = 0; i < SIZE; i++) {
        if (greater_arr[i] == -1) {
            continue;
        }

        printf("%d ", greater_arr[i]);
    }
    printf("\n");

    // question e
    int smallest_value = arr[0];
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < smallest_value) {
            smallest_value = arr[i];
        }
    }
    printf("The smallest value is %d\n", smallest_value);

    return 0;
}