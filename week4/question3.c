#include<stdio.h>

int main(){
    char arr[] = {'R', 'M', 'I', 'T', 'U', 'n', 'i', 'v', 'e', 'r', 's', 'i', 't', 'y'};
    int len = sizeof(arr) / sizeof(char);

    char temp;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[i]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int k = 0; k < len; k++) {
        printf("%c ", arr[k]);
    }
    return 0;
}