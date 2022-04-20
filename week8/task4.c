#include<stdio.h>
#include<string.h>

#if 0
int find(char* text, char* keyword) {
    char* p_text = NULL;
    char* p_keyword = keyword;
    int keyworldlen = strlen(p_keyword);
    for (p_text = text; *p_text != '\0'; p_text++) {
        if (*p_text == *p_keyword) {
            for (int i = 0; i < keyworldlen; i++) {
                if (*(p_text + i) != *(p_keyword + i)) {
                    break;
                }

                if (i == keyworldlen - 1) {
                    return 1;
                }
            }
        }
    }

    return 0;
}

#endif

// use built-in strncmp
int find(char text[], char keyword[]) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (strncmp(text + i, keyword, strlen(keyword)) == 0) {
            return 1;
        }
    }

    return 0;
};

int main(void) {
    char text[50];
    char keyword[50];

    printf("Enter text: ");
    scanf("%[^\n]%*c", &text);

    printf("Enter keyword: ");
    scanf("%[^\n]%*c", &keyword);

    if (find(text, keyword)) {
        printf("Found keyword in text");
    } else {
        printf("Cannot find keyword in text");
    }

    return 0;
}