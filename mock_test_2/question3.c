#include <stdio.h>
#include <string.h>
#include <stdlib.h>     /* atoi */
#define STRSZE 50

int main() {
    char source[STRSZE], dest[STRSZE];
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Enter a date in dd/mm/yyyy: ");
    scanf("%s", &source);

    #if 0
    int index = 0;

    p = strtok(source, "/");
    for (int i = 0; i < 2; i++) {
        dest[index++] = *(p + i);
    }
    dest[index++] = ' ';

    p = strtok(NULL, "/");
    int monthIndex = atoi(p) - 1;
    char* month = months[monthIndex];
    for (; *month != '\0'; month++) {
        dest[index++] = *month;
    }
    dest[index++] = ' ';

    p = strtok(NULL, "/");
    for (int i = 0; i < 4; i++) {
        dest[index++] = *(p + i);
    }

    dest[index] = '\0';
    #endif

    #if 1

    char* token = strtok(source, "/");
    // must use strcpy to add the first token to dest string. Otherwise there will be garbage characters
    strcpy(dest, token); 
    strcat(dest, " ");
    
    token = strtok(NULL, "/");
    int monthIndex = atoi(token) - 1;
    strcat(dest, months[monthIndex]);
    strcat(dest, " ");

    token = strtok(NULL, "/");
    strcat(dest, token);
    strcat(dest, "\0");

    #endif

    printf("Converted format: %s\n", dest);
    return 0;
}