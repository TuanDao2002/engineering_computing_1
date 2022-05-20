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
#include <time.h>
#include <stdlib.h>

#define ARR_SIZE 8

int main() {
    int arr[ARR_SIZE];

    // generate random values from -100 to 100
    srand(time(NULL));
    const int MAX = 100, MIN = -100;
    for (int i = 0; i < ARR_SIZE; i++) {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }

    // print all array values
    printf("Array values: ");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // find the smallest odd value in array
    int smallestOdd = arr[0];
    for (int i = 1; i < ARR_SIZE; i++) {
        // find the first odd value in the array
        if (smallestOdd % 2 == 0 && arr[i] % 2 != 0) {
            smallestOdd = arr[i];
            continue;
        }
        
        // find the odd value smaller than the smallest odd value and assign the smallest odd value to it
        if (arr[i] % 2 != 0 && arr[i] < smallestOdd) {
            smallestOdd = arr[i];
        }
    }    

    // if there is no odd, print message. Otherwise, print the smallest odd value found
    if (smallestOdd % 2 == 0) {
        printf("There is not odd value\n");
    } else {
        printf("Smallest odd value: %d\n", smallestOdd);
    }

    int positiveCount = 0, negativeCount = 0;
    for (int i = 0; i < ARR_SIZE; i++) {
        if (arr[i] > 0) { // if the positive value is found, increase the number of positive values
            positiveCount++;
        } else if (arr[i] < 0) {// if the negative value is found, increase the number of negative values
            negativeCount++;
        }
    }

    printf("Numbers of positive and negative values: %d %d\n", positiveCount, negativeCount);

    return 0;
}