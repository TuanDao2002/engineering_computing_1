#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc != 2) {
        printf("There must be 1 filename\n");
        return -1;
    }

    FILE* fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return -1;
    }

    for (char ch = fgetc(fp); ch != EOF; ch = fgetc(fp)) {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}