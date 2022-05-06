#include <stdio.h> 
int num = 20; //(a)

int main(){ 
    num = 10; //(b) 
    int x; 
    printf("Enter a number: "); 
    scanf("%d", &x); 
    if (x > 10) {
        int num = x; //(c) 
        x = num; //(d) 
    } 
    printf("%d", x + num); //(e) 
    return 0; 
} 