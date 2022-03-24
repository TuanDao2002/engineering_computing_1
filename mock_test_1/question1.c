/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2022A
  Lab Assessment: 1
  Author: Dao Kha Tuan
  ID: s3877347
  Compiler used: 8.1.0
  Created  date: 23/02/2002
  Acknowledgement: None
*/

#include <stdio.h>

int main() {
    printf("Enter an alphanumerical character: ");
    char character;
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z') { // check if the character is lowercase
        printf("It is a lowercase alphebetical character\n");

        // convert the character to uppercase
        character -= 32;
        printf("> Converted character: %c\n", character);

    } else if (character >= 'A' && character <= 'Z') { // check if the character is uppercase
        printf("It is an uppercase character\n");

        // convert the character to lowercase
        character += 32;
        printf("> Converted character: %c\n", character);

    } else if (character >= '0' && character <= '9') { // check if the character is numeric
        printf("It is a numerical character\n");
    } else { // if not satisfy all the above conditions, the character is not alphanumerical
        printf("It is not alphanumerical character\n");
    }
    return 0;
}