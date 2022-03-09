#include<stdio.h>

int main(){
    int arr[] = {12, 7, -3, 4, 1, 22};
    int* p = arr;
    int array_size = sizeof(arr) / sizeof(int);

    printf("Normal order:\n");
    for (; p < arr + array_size; p++) {
        printf("%d\t", *p);
    }
    printf("\n");

    printf("Reverse order:\n");
    for (p--; p >= arr; p--) { // p-- at the first index as p points at '\0' (string termination)
        printf("%d\t", *p);
    }
    printf("\n");

    int sum = 0;
    for (; p < arr + array_size; p++) {
        sum += *p;
    }
    printf("Sum is: %d\n", sum);

    int temp;
    for (p = arr; p < arr + array_size/2; p++) {
        temp = *p;
        *p = *((arr + array_size - 1) - (p - arr));  // last index minus the current index
        *((arr + array_size - 1) - (p - arr)) = temp;  
    }

    printf("Reverse array:\n");
    for (p = arr; p < arr + array_size; p++) {
        printf("%d\t", *p);
    }
    printf("\n");
    return 0;
}