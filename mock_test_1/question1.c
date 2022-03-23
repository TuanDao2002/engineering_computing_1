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

    if (character >= 'a' && character <= 'z') {
        printf("It is a lowercase alphebetical character\n");
        character -= 32;
        printf("> Converted character: %c\n", character);
    } else if (character >= 'A' && character <= 'Z') {
        printf("It is an uppercase character\n");
        character += 32;
        printf("> Converted character: %c\n", character);
    } else if (character >= '0' && character <= '9') {
        printf("It is a numerical character\n");
    } else {
        printf("It is not alphanumerical character\n");
    }
    return 0;
}