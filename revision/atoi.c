#include <stdio.h>
#include <string.h>

#define STRSZE 100

int atoi(const char* str) {
    int value = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }

        value = value * 10 + (str[i] - '0');
    }

    return value;
};

int main() {
    char input[STRSZE];
    printf("Enter a string: ");
    scanf("%s", &input);
    
    printf("The integer value is: %d", atoi(input));
    return 0;
}