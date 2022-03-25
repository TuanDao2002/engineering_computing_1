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

int main() {
    while (1) {
        int num;

        // ask user to enter an integer between 1 and 10
        printf("Enter a number (1 - 10): ");
        scanf("%d", &num);

        // if the integer is not in range between 1 and 10, the program prints out an error message and stops 
        if (num < 1 || num > 10) {
            printf("Invalid Number\n");
            break;
        }

        printf("\n");

        if (num % 2 == 0) { // question a, if the input integer is even

            // loop through all of the rows
            for (int row = 1; row <= num; row++) {

                // print out the pattern for each row
                for (int block = 1; block <= num + 1 - row; block++) {
                    printf("%2d  ", block);
                }

                printf("\n");
            }
        } else { // question b, if the input integer is odd
            // loop through all the rows
            for (int row = 1; row <= num; row++) {

                if (row == 1) { // if it is the first row, print out the values in descending order
                    for (int block = num; block >= 1; block--) {
                        printf("%2d  ", block);
                    }
                } else { // if it is not the first row

                    // loop through each block in the row
                    for (int block = 1; block <= num; block++) {
                        if (block == row) { // if the block index is equal to the row index, print out the pattern value
                            printf("%2d  ", num + 1 - row);
                        } else if (block == num) { // if the block index is at the end of the row, print out 1
                            printf(" 1");
                        } else { // otherwise, print out 4 whitespaces
                            printf("    ");
                        }
                    }
                }

                printf("\n");
            }

        }

        printf("\n");
    }

    return 0;
}