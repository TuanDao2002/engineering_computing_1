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
#include <string.h>

#define STRSZE 100

int main() {
    char input[STRSZE];

    // ask user to enter a string
    printf("Enter a string: ");
    scanf("%[^\n]s", input);

    // loop through each character in the string
    for (int i = 0; input[i] != '\0'; i++) {

        // if there are digits from '0' to '5'
        if (input[i] >= '0' && input[i] <= '5') {
            // replace them with '*'
            input[i] = '*'; 

        // if there are digits from '6' to '9'
        } else if (input[i] >= '6' && input[i] <= '9') { 
            // replace them with '#'
            input[i] = '#';
        }
    }

    // print out the result
    printf("Result: %s", input);
    return 0;
}