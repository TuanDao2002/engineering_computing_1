/*
    RMIT University Vietnam
    Course: EEET2601 Engineering Computing 1
    Semester: 2021C
    Lab Assessment: 2
    Author: Dao Kha Tuan
    ID: s3877347
    Compiler used: gcc 8.1.0
    Created  date: 29/04/2022
    Acknowledgement: 'None'
*/

#include <stdio.h>

// the function to print all elements greater than 5
void printLargerThan5(int arr[], int size) {
    // loop through all elements
    for (int i = 0; i < size; i++) {
        // if there is an element larger than 5, print it out to the console
        if (arr[i] > 5) {
            printf("%d ", arr[i]);
        }
    }
}

// the function to return the sum of all odd numbers in the array
int sumOfOddNumbers(int arr[], int size) {
    // a variable to store the sum of odd numbers in the array
    int sumOfOddNums = 0;
    for (int i = 0; i < size; i++) {

        // if there is an odd number in the array, add it to the "sumOfOddNums" variable
        if (arr[i] % 2 != 0) {
            sumOfOddNums += arr[i];
        }
    }

    // return the sum of all odd numbers in the array
    return sumOfOddNums;
}

// the function to return the minimum value of even numbers in the array
int minEvenNumber(int arr[], int size) {
    // a variable to store the smallest even number
    // assign it with the first element
    int minEven = arr[0];
    for (int i = 0; i < size; i++) {

        // if the "minEven" variable (which is the first element) is not even number, 
        // assign the closet even number to the variable "minEven" and continue the loop
        if (minEven % 2 != 0 && arr[i] % 2 == 0) {
            minEven = arr[i];
            continue;
        }

        // if the "minEven" variable is even, checck if there is other even numbers that are smaller than it and assign them to it
        if (arr[i] < minEven && arr[i] % 2 == 0) {
            minEven = arr[i];
        }
    }

    // return the smallest even number in the array
    return minEven;
}

// a function to check the number of occurences of a number in array
int occurence(int arr[], int size, int val) {
    // a variable to store the number of occurences of a number in the array
    int occurence = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == val) {
            // if there is occurence, increase "occurenece" by 1
            occurence++;
        }
    }

    return occurence;
}

// a function to check if all elements of arr2 appear more than once in arr1; (return 0 otherwise). 
int appeareMoreThanOnce(int arr1[], int size1, int arr2[], int size2) {
    
    // loop through elements in arr2
    for (int i = 0; i < size2; i++) {
        // if there is a number that has the number of occurences in arr1 less than 2, return 0
        if (occurence(arr1, size1, arr2[i]) < 2) {
            return 0;
        }
    }
    
    // Otherwise, return 1
    return 1;
}

int main() {
    int array[] = {3, 5, 8, 8, 7, 9, 7};
    int size = sizeof(array) / sizeof(array[0]);

    // print all elements in the array to check
    printf("All elements in the array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Question a
    printf("All elements larger than 5: ");
    printLargerThan5(array, size);
    printf("\n");

    // Question b
    printf("Sum of odd numbers in the array is: %d\n", sumOfOddNumbers(array, size));

    // Question c
    printf("The minimum value of even numbers in the array is: %d\n", minEvenNumber(array, size));

    // Question d
    int another_arr[] = {7,8};
    int another_size = sizeof(another_arr) / sizeof(another_arr[0]);

    // check if all elements in another_arr[] appear more than once in array[]
    if (appeareMoreThanOnce(array, size, another_arr, another_size)) {
        printf("All elements of arr2 appear more than once in arr1");
    } else {
        printf("Not all elements of arr2 appear more than once in arr1");
    }
    return 0;
}