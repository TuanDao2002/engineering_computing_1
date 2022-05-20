/*
    RMIT University Vietnam
    Course: EEET2601 Engineering Computing 1
    Semester: 2021C
    Lab Assessment: 3
    Author: Dao Kha Tuan
    ID: s3877347
    Compiler used: 8.1.0
    Created  date: 20/05/2022
    Acknowledgement: 'None'
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define STR_SIZE 100

// function to calculate the sum of values divisible by 3
int sumDivBy3(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        // if the value is divisibe by 3, add it to sum
        if (arr[i] % 3 == 0) {
            sum += arr[i];
        }
    }

    // return the sum
    return sum;
}

void printAlpha(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) { // if the character in the string is alphabetical, print it to the console
            printf("%c ", str[i]);
        }
    }
    printf("\n");
}

int allSmaller(int arr1[], int size1, int arr2[], int size2) {
    for (int i = 0; i < size1; i++) { // iterate through array arr1
        for (int j = 0; j < size2; j++) { // iterate through array arr2
            if (arr1[i] >= arr2[j]) { // if there is element in arr1 greater than an element in arr2, return 0
                return 0;
            }
        }
    }

    // otherwise, return 1
    return 1;
}

void modifyStr(char mainStr[], char subStr[]) {
    int firstWordLen = 0; // variable to store the length of first word
    for (int i = 0; i < strlen(mainStr); i++) {
        if (mainStr[i] != ' ' && (i == 0 || mainStr[i - 1] == ' ')) { // find the first word
            for (int j = i; mainStr[j] != ' ' && mainStr[j] != '\0'; j++) {
                firstWordLen++;
                i++; // move to the index after the first word
            }

            char remainStr[STR_SIZE];
            strcpy(remainStr, mainStr + i); // store the remaining string after the first word

            if (firstWordLen >= 1) {
                strcpy(mainStr + i - firstWordLen, subStr); // replace the first word with the subStr
                strcat(mainStr, remainStr); // concat the new first word to the remaining string
            }

            break;
        }
    }
}

int main() {
    // question a
    int arr[5] = {9, 2, 3, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of all numbers divisible by 3: %d\n", sumDivBy3(arr, size));

    // question b
    char str[STR_SIZE] = "tuan09092002@gmail.com";
    printf("All alphabetical characters in string %s are: ", str);
    printAlpha(str);

    // question c
    int arr1[5] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[6] = {2, 4, 6, 7, 3, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    if (allSmaller(arr1, size1, arr2, size2)) {
        printf("All elements in arr1 are smaller than all elements in arr2\n");
    } else {
        printf("Not all elements in arr1 are smaller than all elements in arr2\n");
    }

    int arr3[7] = {9, 6, 6, 7, 7, 9, 8};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    if (allSmaller(arr1, size1, arr3, size3)) {
        printf("All elements in arr1 are smaller than all elements in arr3\n");
    } else {
        printf("Not all elements in arr1 are smaller than all elements in arr3\n");
    }

    char mainStr[STR_SIZE] = " 67@Hello 8   9!";
    char subStr[STR_SIZE] = "abc123";
    modifyStr(mainStr, subStr);

    printf("Main string becomes:%s\n", mainStr);
    return 0;
}