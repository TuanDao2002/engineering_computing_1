#include<stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};

    int *p = arr;

    printf("%s %10s %15s\n", "Int", "Hex", "Pointer");
    for (; p < arr + 5; p++) {
        printf("%d %8x %15p\n", p, p, p);
    }

    return 0;
}