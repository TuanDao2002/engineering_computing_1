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
#include <stdlib.h>

#define STRSZE 100

int main() {
    char input[STRSZE];
    char result[STRSZE]; // a string to store the result

    printf("Enter your info: ");
    scanf("%[^\n]s", input);

    // use strtok to get the first token of the string, which is the first name of the student
    char* token = strtok(input, " ");
    strcpy(result, token); // copy it to result string

    char temp[STRSZE]; // a temporary string to store the next token of the input string
    token = strtok(NULL, " "); // move to next token of the string input
    while (token != NULL) {
        strcpy(temp, token); // copy the next token to "temp" string
        if (temp[strlen(temp) - 1] == ',') { // if the next token ends with a comma, it is the last name of the student
            // then concat the space and the last name to result string
            strcat(result, " ");
            strcat(result, temp);
        }

        // move to next token
        token = strtok(NULL, " ");

        // if this is the last token of the string input, it is the birth year of the student
        if (token == NULL) {

            // use strtol to convert birth year string to a decimal number 
            int year = strtol(temp, NULL, 10);

            // calculate the current age of student
            int age = 2022 - year;

            // concat the space to result string
            strcat(result, " ");

            // convert the age number to age string
            char ageString[10];
            itoa(age, ageString, 10);

            // concat age string to result string
            strcat(result, ageString);

            // concat "-year-old" to result string (with string termination)
            strcat(result, "-year-old\0");
        }        
    }

    // print out the result string
    printf("Result: %s", result);

    return 0;
}