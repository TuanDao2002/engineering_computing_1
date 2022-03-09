#include<stdio.h>
#include<string.h>
int main(){
    char names[3][50];

    char name[50];
    for (int i = 0; i < 3; i++) {
        printf("Enter full name %d: ", i + 1);
        scanf("%[^\n]%*c", &name); // get multiple input with spaces without exit program
        strcpy(names[i], name);
    }

    char keyword[20];
    printf("Enter a search keyword: ");
    scanf("%[^\n]s", &keyword);

    for (int i = 0; i < 3; i++) {
        if (strstr(names[i], keyword) != NULL) {
            printf("%s\n", names[i]);
        }
    }

    return 0;
}