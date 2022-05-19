#include <stdio.h>

#define ARR_SIZE 4

typedef struct {
    int hour;
    int minute;
    int second;
} time;

double timeDifference(time t1, time t2) {
    return (t1.hour + (t1.minute / 60.0) + (t1.second / 3600)) - (t2.hour + (t2.minute / 60.0) + (t2.second / 3600));
}

int main() {
    time t1, t2;

    printf("Enter the first time point: ");
    scanf("%d:%d:%d", &t1.hour, &t1.minute, &t1.second);

    printf("Enter the second time point: ");
    scanf("%d:%d:%d", &t2.hour, &t2.minute, &t2.second);

    printf("Time Difference: %.2lf hours.\n", timeDifference(t1, t2));

    time timeArr[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("Enter the time point %d: ", i + 1);
        scanf("%d:%d:%d", &timeArr[i].hour, &timeArr[i].minute, &timeArr[i].second);
    }

    time latestTime = timeArr[0];
    for (int i = 1; i < ARR_SIZE; i++) {
        if (timeDifference(timeArr[i], latestTime) > 0) {
            latestTime = timeArr[i];
        }
    }

    printf("Latest time is: %d:%d:%d", latestTime.hour, latestTime.minute, latestTime.second);
    return 0;
}