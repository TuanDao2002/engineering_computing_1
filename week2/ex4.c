#include<stdio.h>

int main(){
    int asmt1, asmt2, asmt3;
    const int asmt1_weight = 30, asmt2_weight = 30, asmt3_weight = 40;

    printf("Enter 3 assessment scores: ");
    scanf("%d %d %d", &asmt1, &asmt2, &asmt3);

    // use float
    float final_result = (asmt1 * asmt1_weight + asmt2 * asmt2_weight + asmt3 * asmt3_weight) / 100.00;

    printf("The final result is: %.2f", final_result);
    return 0;
}