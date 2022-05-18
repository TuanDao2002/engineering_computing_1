#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STRSZE 100

int numberOfAlpha(char str[]) {
    int num = 0;
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            num++;
        }
    }

    return num;
}

double averageDigits(char str[]) {
    double total = 0;
    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            total += str[i] - '0';
            count++;
        }
    }

    if (count == 0) {
        return 0;
    }

    return total  / count;
}

void removeNonDigits(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] < '0' || str[i] > '9') {
            for (int j = i; j < strlen(str); j++) {
                str[j] = str[j + 1];
            }

            i--;
        }
    }
}

int isLeapYear(int year) {
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

void printNumOfDayInYear(char str[]) {
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    char *temp;
    int day, month, year;

    temp = strtok(str, "/");  
    day = atoi(temp);

    temp = strtok(NULL, "/");
    month = atoi(temp);

    temp = strtok(NULL, "/");
    year = atoi(temp);

    if (month == 1) {
        printf("Day %d\n", day);
        return;
    }

    int dayInYear = 0;
    if (month > 2 && isLeapYear(year)) {
        dayInYear++;
    }

    for (int i = 1; i <= 12; i++) {
        if (month > i) {
            dayInYear += monthDays[i - 1];
        } else if (month == i) {
            dayInYear += day;
            break;
        }
    }

    printf("Day %d\n", dayInYear);
}

int main() {
    char str[STRSZE];
    printf("Enter a string: ");
    scanf("%s", &str);
    printf("Number of alphabetical characters: %d\n", numberOfAlpha(str));
    printf("Average value of all digits: %lf\n", averageDigits(str));
    removeNonDigits(str);
    printf("String without non-digit characters: %s\n", str);

    char dayStr[STRSZE];
    printf("Enter a date: ");
    scanf("%s", &dayStr);
    printNumOfDayInYear(dayStr);
    return 0;
}