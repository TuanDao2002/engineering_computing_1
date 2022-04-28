#include<stdio.h>
#include<string.h>

int main(){
    char input[50];
    
    printf("Enter a string: ");
    scanf("%[^\n]s", &input);
    
    int len = strlen(input);
    for (int i = 0; i < len / 2; i++) {
        if (input[i] != input[len - 1 - i]) {
            printf("This is not palindrome");
            return -1;
        }
    }

    printf("This is a palindrome");
    return 0;
}