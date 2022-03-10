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

// this method require a char* temp to function
char* convert2string2(int num, char* s) {
    if (num == 0) {
        return s;
    }

    char* current_char = s;
    char* next_char = convert2string2(num / 10, current_char);
    
    *next_char = num % 10 + '0';
    next_char++;
    *next_char = '\0'; // terminate the string with '\0'

    return next_char;
}

void convert2string(int num, char* s) {
    static int index = 0;
    if (num == 0) {
        return;
    }

    convert2string(num / 10, s);
    s[index] = num % 10 + '0';
    index++;
    s[index] = '\0';
}

int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Sum of integers from 1 to %d: %d\n", n, sumofintegers(n));

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printarrayelements(arr, sizeof(arr) / sizeof(int));
    printf("\n");

    char int_str[20];
    convert2string(n, int_str);
    printf("Print out integer as string: %s\n", int_str);
    return 0;
}