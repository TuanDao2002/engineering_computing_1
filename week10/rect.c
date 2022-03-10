#include <stdio.h>
#include "point.c"

typedef struct rect {
    point lower_left;
    point upper_right;
} rect;

double area(rect r) {
    return (r.upper_right.x - r.lower_left.x) * (r.upper_right.y - r.lower_left.y);
}

int pointinside(point p, rect r) {
    return (p.x <= r.upper_right.x && p.x >= r.lower_left.x) && (p.y <= r.upper_right.y && p.y >= r.lower_left.y);
}

int rectinside(rect r1, rect r2) {
    return pointinside(r1.upper_right, r2) && pointinside(r1.lower_left, r2);
}

int main(){
    point lower_left = {-2.0, -2.0};
    point upper_right = {2.0, 2.0};
    rect fixed_rect = {lower_left, upper_right};

    printf("The area is %lf\n", area(fixed_rect));

    point p1, p2;
    printf("Enter x and y of a point p1: ");
    scanf("%lf %lf", &p1.x, &p1.y);

    printf("Enter x and y of a point p2: ");
    scanf("%lf %lf", &p2.x, &p2.y);

    rect new_rect = {p1, p2};
    if (rectinside(new_rect, fixed_rect)) {
        printf("The rectangle is completely contained inside\n");
    } else {
        printf("The rectangle is not completely contained inside\n");
    }

    point points_list[5] = {{1, 2}, {2, 3}, {3, 1}, {1, 3}, {3, 3}};
    int first_point_index = 0;
    int second_point_index = 1;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (pointdist(points_list[first_point_index], points_list[second_point_index]) < pointdist(points_list[i], points_list[j])) {
                first_point_index = i;
                second_point_index = j;
            }
        }
    }

    printf("The pair that is farthest apart is point index %d and %d\n", first_point_index, second_point_index);
    return 0;
}
