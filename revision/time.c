#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_SIZE 4

struct time {
    int hh;
    int mm;
    int ss;
};

double timeDifference(struct time t1, struct time t2) {
    double secondDifference = t1.ss - t2.ss;
    double minuteDifference = t1.mm - t2.mm;
    double hourDifference = t1.hh - t2.hh;

    if (secondDifference < 0) {
        secondDifference += 60;
        minuteDifference--;
    }

    if (minuteDifference < 0) {
        minuteDifference += 60;
        hourDifference--;
    }

    return hourDifference + (minuteDifference * 60 + secondDifference) / 3600;
}

int main() {
    struct time t1, t2;
    printf("Enter the first time point: ");
    scanf("%d:%d:%d", &t1.hh, &t1.mm, &t1.ss);
    

    printf("Enter the second time point: ");
    scanf("%d:%d:%d", &t2.hh, &t2.mm, &t2.ss);

    printf("Time Difference: %.2lf hours.\n", timeDifference(t1, t2));

    struct time timeArr[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("Enter the time point %d: ", i + 1);
        scanf("%d:%d:%d", &timeArr[i].hh, &timeArr[i].mm, &timeArr[i].ss);
    }

    struct time latestTime = timeArr[0];
    for (int i = 1; i < ARR_SIZE; i++) {
        if (timeDifference(timeArr[i], latestTime) > 0) {
            latestTime = timeArr[i];
        }
    }

    printf("Latest time point is: %2d:%2d:%2d", latestTime.hh, latestTime.mm, latestTime.ss);
    return 0;
}