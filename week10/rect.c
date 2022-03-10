#include <stdio.h>

typedef struct point{
    double x;
    double y;
} point;

typedef struct rect {
    point lower_left;
    point upper_right;
} rect;

double area(rect r) {
    return (r.upper_right.x - r.lower_left.x) * (r.upper_right.y - r.lower_left.y);
}

int main(){
    
    return 0;
}
