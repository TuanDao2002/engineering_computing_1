#include<stdio.h>
#define SIZE 50

int main(){
    char str[SIZE];

    printf("Enter a string: ");
    scanf("%[^\n]s", &str);

    int count = 0;
    int uppercase = 0;
    int lowercase = 0;
    int total_letters = 0;
    int digits = 0;
    int punctuations = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;

        if (isupper(str[i])) {
            uppercase++;
        } 
        
        if (islower(str[i])) {
            lowercase++;
        }

        if (isalpha(str[i])) {
            total_letters++;
        }

        if (isdigit(str[i])) {
            digits++;
        }

        if (ispunct(str[i])) {
            punctuations++;
        }
    } 

    printf("String's length is: %d\n", count);
    printf("String's number of uppercase letters is: %d\n", uppercase);
    printf("String's number of lowercase letters is: %d\n", lowercase);
    printf("String's number of total letters is: %d\n", total_letters);
    printf("String's number of digit letters is: %d\n", digits);
    printf("String's number of punctuations is: %d\n", punctuations);

    char temp;
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reverse string is: %s\n", str);
    return 0;
}