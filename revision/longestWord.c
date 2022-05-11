#include <stdio.h>
#include <string.h>

#define STR_SZE 100

#if 0
int main() {
    char input[STR_SZE];
    printf("Enter a string: ");
    scanf("%[^\n]s", &input);

    char* word = strtok(input, " ");
    char *longestWord = word;

    while (word != NULL) {
        printf("%s\n", word);
        if (strlen(word) > strlen(longestWord)) {
            longestWord = word;
        }

        word = strtok(NULL, " ");
    }

    printf("Longest word is: %s\n", longestWord);
}
#endif

int main() {
    char input[STR_SZE];
    printf("Enter a string: ");
    scanf("%[^\n]s", &input);

    char longestWord[STR_SZE] = "";

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != ' ' && (input[i - 1] == ' ' || i == 0)) {
            char word[STR_SZE];
            int wordIndex = 0;
            for (int j = i; input[j] != ' ' && input[j] != '\0'; j++) {
                word[wordIndex++] = input[j];
                i++;
            }
            word[wordIndex] = '\0';

            printf("%s\n", word);

            if (strlen(word) > strlen(longestWord)) {
                strcpy(longestWord, word);
            }

        }
    }

    printf("Longest word is: %s\n", longestWord);
    return 0;
}