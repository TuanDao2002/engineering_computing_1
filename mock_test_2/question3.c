#include <stdio.h>
#include <string.h>
#include <stdlib.h>     /* atoi */
#define STRSZE 50

int main() {
    char source[STRSZE], dest[STRSZE];
    char* p;
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Enter a date in dd/mm/yyyy: ");
    scanf("%s", &source);

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

    printf("Converted format: %s\n", dest);
    return 0;
}