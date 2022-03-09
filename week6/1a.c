#include<stdio.h>

int main(){
    char ch = 'A';
    int *ptr = &ch;

    *ptr = 'B';
    printf("%c", ch);
    return 0;
}