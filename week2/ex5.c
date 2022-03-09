#include<stdio.h>

int main(){
    int minutes, hours;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;
    minutes = minutes % 60;
    printf("The result is: %d hours %d minutes", hours, minutes);
    return 0;
}