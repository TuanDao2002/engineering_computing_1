#include<stdio.h>
#include<string.h>
#define SIZE 50
int main(){
    //Declare arrays of 5 strings
    char names[5][SIZE]; 
  
    //Qa. Input names and print out first names
    for (int i = 0; i < 5; i++){
        printf("Enter full name %d: ", i + 1);
        scanf(" %[^\n]s", names[i]); // have a space before so it will skip newline character of previous input and trailing whitespaces
    }

    printf("The first names are ");
    // char* first_name;
    // char temp_name_to_token[50]; //a temp variable to store the full name for tokenizing
    // for (int j = 0; j < 5; j++) {
    //     // use strcpy to copy the full name to the temp variable (as strtok is a function returns pointer to the first token)
    //     // cannot assign directly as the temp variable has fixed size (cannot use char* pointer due to pass by reference)
    //     strcpy(temp_name_to_token, names[j]); // use temp variable as strtok will tokenize the string name, other names beside first name will not exist

    //     // get the first name of the full name with strtok
    //     first_name = strtok(temp_name_to_token, " ");
    //     if (j == 4) {
    //         printf("and %s.", first_name);
    //         continue;
    //     }

    //     printf("%s, ", first_name);
    // }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < strlen(names[i]); j++) {
            if (names[i][j] != ' ') {
                printf("%c", names[i][j]);
            } else {
                break;
            }
        }

        if (i == 3) {
            printf(", and ");
        } else if (i < 3) {
            printf(", ");
        }
    }

    char temp_name[50];
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {// compare alphabetical order with strcmp
                strcpy(temp_name, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp_name);
            }
        }
    }    

    printf("\nSorted names: \n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}