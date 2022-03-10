#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc != 2) {
        printf("There must be only one filename\n");
        return -1;
    }

    int lines = 0;
    int words = 0;

    FILE* fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return -2;
    }

    char str[200];
    
    while (fgets(str, sizeof(str), fp)) {
        lines++;
    }

    rewind(fp);

    int ch = fgetc(fp);
    while(ch != EOF) {
        if (ch != '\n') {
            words++;
        }
        
        ch = fgetc(fp);
    }

    printf("Number of lines: %d\n", lines);
    printf("Number of words: %d\n", words);

    fclose(fp);
    return 0;
}