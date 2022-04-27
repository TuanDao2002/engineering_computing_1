#include <stdio.h>

#define STRSZE 100

int main() {
    char password[STRSZE];
    printf("Enter your password: ");
    scanf("%s", &password);

    for (int i = 0; password[i] != '\0'; i++) {
        if (password[i] == 's') {
            password[i] = '$';
        } else if (password[i] == 'a') {
            password[i] = '@';
        } else if (password[i] == 'l') {
            password[i] = '1';
        } else if (password[i] == 'o') {
            password[i] = '0';
        }
    }

    printf("Result: %s", password);
    return 0;
}