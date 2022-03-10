#include <stdio.h>
#include <math.h>

#define precision 0.000001

typedef struct point{
    double x;
    double y;
} point;

//a
void pointshow(point p) {
    printf("[%lf, %lf]\n", p.x, p.y);
}

//b
double pointdist(point p1, point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

//c
int pointequal(point p1, point p2) {
    return abs(p1.x - p2.x) < precision && abs(p1.y - p2.y) < precision;
}

int main(){
    point test = {.25, .75};
    pointshow(test);

    point p1;
    printf("Enter x and y for p1: ");
    scanf("%lf %lf", &p1.x, &p1.y);

    point p2;
    printf("Enter x and y for p2: ");
    scanf("%lf %lf", &p2.x, &p2.y);

    printf("Euclidean distance between p1 and p2: %.2lf\n", pointdist(p1, p2));
    if (pointequal(p1, p2)) {
        printf("2 points are equal\n");
    } else {
        printf("2 points are not equal\n");
    }
    return 0;
}