#include<stdio.h>
#include<math.h>
int formtriangle(float edge1, float edge2, float edge3) {
    if (edge1 < 0 || edge2 < 0 || edge3 < 0) return 0;

    if (edge1 + edge2 > edge3 && abs(edge1 - edge2) < edge3) {
        return 1;
    }

    return 0;
}

int main(void){
    float edge1, edge2, edge3;
    printf("Edge 1: ");
    scanf("%f", &edge1);

    printf("Edge 2: ");
    scanf("%f", &edge2);

    printf("Edge 3: ");
    scanf("%f", &edge3);

    if (formtriangle(edge1, edge2, edge3)) {
        printf("Can form a triangle");
    } else {
        printf("Cannot form a triangle");
    }
    return 0;
}