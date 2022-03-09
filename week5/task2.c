#include<stdio.h>
#include<string.h>
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