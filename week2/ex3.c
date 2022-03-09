#include<stdio.h>
#include<math.h>

int main(){
    double x, y;
    printf("Enter 2 numbers x and y: ");
    scanf("%lf %lf", &x, &y);
    int result = (int)pow(x, y);
    printf("The result is: %d", result);
    return 0;
}