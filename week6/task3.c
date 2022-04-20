#include<stdio.h>
#include<string.h>

#if 0
int main(){
    char input[50]; // cannot use char* pointer for scanf
    printf("Enter a string: ");
    scanf("%[^\n]%*c", &input);

    int len = 0;
    char* p;
    for (p = input; *p != '\0'; p++) {
        len++;
    }    
    printf("Length of string %s is: %d\n", input, len);

    for (p = input; *p != '\0'; p++) {
        if (*p >= 'a' && *p <= 'z') {
            *p -= 32;
        }
    }
    printf("Uppercase string is: %s\n", input);

    char find[10]; // target substring
    char replace[10]; // replace string

    printf("Find: ");
    scanf("%[^\n]%*c", &find);

    printf("Replace: ");
    scanf("%[^\n]%*c", &replace);

    char* sub = strstr(input, find); // find the pointer of the first substring
    char result[50]; // array of characters to store the result
    char* p_res = result; // pointer to the result string
    char* temp; // a temporary pointer to interate through the replace and find strings

    for (p = input; *p != '\0'; p++) { // iterate through the input string
        if (p == sub) { // if the position of the substring is found
            for (temp = replace; *temp != '\0'; temp++) { // iterate through the replace string
                *p_res = *temp; // the result string will add the replace character
                p_res++; // move to the next address of the result string
            }

            sub = strstr(p + 1, find); // find the pointer to the new substring after the current one

            p--; // move the pointer backward to avoid ignoring the character next to the target substring
            // move the pointer to the new address after the target substring of the input string to ignore it
            for (temp = find; *temp != '\0'; temp++) {
                p++; 
            }

        } else { // add other characters except substring to the result string
            *p_res = *p;
            p_res++;
        }
    }

    *p_res = '\0'; // add the termination to the result string

    printf("Result: %s\n", result);

    return 0;
}
#endif

#if 1
#include <stdio.h>
#include <string.h>
#define STRSIZE 100

int main() {
    char str[STRSIZE];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    char find[STRSIZE];
    printf("Find: ");
    scanf(" %[^\n]s", find);

    char replace[STRSIZE];
    printf("Replace: ");
    scanf(" %[^\n]s", replace);

    char result[STRSIZE];
    int index = 0;
    // for loop to go through all characters of the input string
    for (int i = 0; str[i] != '\0'; i++) {            
        if (strncmp(find, str + i, strlen(find)) != 0) { // if the find string is not detected
            // str + i: the substring from index i, e.g. (str + 2) of str "hello world" = "llo world"
            result[index++] = str[i]; // put all the unmatched characters into the result string
        } else { // Otherwise, put the replace string into result string
            for (int j = 0; replace[j] != '\0'; j++) {
                result[index++] = replace[j];
            }
        }
    }

    printf("The string after replacement: %s\n", result);

    return 0;
}

#endif