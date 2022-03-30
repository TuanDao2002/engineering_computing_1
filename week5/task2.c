#include<stdio.h>
#include<string.h>
#if 0
int main(){
    int words = 0;
    char sentence[100];
    char words_arr[10][100]; // must be nested array for array of string as a string is array of char

    printf("Enter a sentence: ");
    scanf("%[^\n]s", &sentence);

    // get the first word of the sentence
    char* p = strtok(sentence, " ");
    
    int len = 0;
    while (p != NULL) {
        // use strcpy to store char* in array of strings words_arr
        strcpy(words_arr[len++], p);
        words++;

        // get the next word of the sentence (passing NULL to first argument)
        p = strtok(NULL, " ");
    }

    printf("Number of words: %d\n", words);
    for (int j = 0; j < len; j++) {
        printf("%s\n", words_arr[j]);
    }

    return 0;
}
#endif

#if 1
int main() {
    int words = 0;
    char sentence[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]s", &sentence);

    words = sentence[0] == ' ' ? words : words + 1;

    for (int i = 0; sentence[i + 1] != '\0'; i++) {
        if (sentence[i] == ' ' && sentence[i + 1] != ' ') {
            words++;
        }
    }

    printf("Number of words: %d", words);

    return 0;
}

#endif