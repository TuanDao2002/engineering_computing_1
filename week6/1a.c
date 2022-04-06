#include<stdio.h>

int main(){
    char ch = 'A';
    char *ptr = &ch;

    *ptr = 'B';
    printf("%c", ch);
    return 0;
}