/*
    RMIT University Vietnam
    Course: EEET2601 Engineering Computing 1
    Semester: 2022A
    Lab Assessment: 1
    Author: Dao Kha Tuan
    ID: s3877347
    Compiler used: gcc 8.1.0
    Created  date: 25/03/2022
    Acknowledgement: None
*/
	
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int SIZE = 8; // define the size of the array to 8
    const int MAX = 200, MIN = 50; // define the max value to 200 and min value to 50

    // question a
    // create an array of size 8
    int arr[SIZE];

    // initialize the random generator
    srand(time(NULL));

    // assign to the array random values between 50 and 200, as well as print it to the screen
    printf("Generated Array: \n");
    for (int i = 0; i < SIZE; i++) {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // question b
    int sum = 0;
    int count = 0;

    // iterate through the array and check which values in the array is even, as well as count it and add it to the "sum" variable
    printf("All elements which are even numbers: \n");
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            count++;
            sum += arr[i];
        }
    }
    printf("\n");

    // print out the number of even values and their sum
    printf("There are %d elements sastified the condition\n", count);
    printf("Their sum: %d", sum);

    return 0;
}