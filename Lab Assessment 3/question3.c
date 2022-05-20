/*
    RMIT University Vietnam
    Course: EEET2601 Engineering Computing 1
    Semester: 2021C
    Lab Assessment: 3
    Author: Dao Kha Tuan
    ID: s3877347
    Compiler used: 8.1.0
    Created  date: 20/05/2022
    Acknowledgement: 'None'
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 100
#define ARR_SIZE 3

typedef struct {
    int day;
    char month[STR_SIZE];
    int year;
} date;

// a function to convert dateStr from user input to struct object "date"
date convertToDate(char dateStr[]) {
    date returnDate;
    char *token;

    token = strtok(dateStr, " ");
    returnDate.day = atoi(token);

    token = strtok(NULL, " ");
    strcpy(returnDate.month, token);

    token = strtok(NULL, " ");
    returnDate.year = atoi(token);

    return returnDate;
}

// function to convert string to lowercase
void lowerCase(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}

// function to compare 2 "date" struct objects, if the first date is after second date, it returns positive value
// if first one is before second one, it returns negative value. Otherwise, return 0
int compareDate(date d1, date d2) {
    int result = d1.year - d2.year;
    if (result != 0) {
        return result;
    }

    char *months[12] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"}; 
    int monthVal1 = 0, monthVal2 = 0;

    lowerCase(d1.month);

    lowerCase(d2.month);

    for (int i = 0; i < 12; i++) {
        if (strcmp(months[i], d1.month) == 0) {
            monthVal1 = i;
        }

        if (strcmp(months[i], d2.month) == 0) {
            monthVal2 = i;
        }
    }

    result = monthVal1 - monthVal2;
    if (result != 0) {
        return result;
    }

    result = d1.day - d2.day;
    if (result != 0) {
        return result;
    }

    return result;
}

// a function to find "date" struct objects that has year or month matched with the search string
void searchDates(char search[], date dateArr[], int size) {
    int findYear = 0;
    if (isdigit(search[0])) { // if the search string is integer, convert it to the year used to find the matched "date" struct objects
        findYear = atoi(search);
    }

    lowerCase(search); // lowercase search string to compare in case insensitive

    int hasResult = 0;

    for (int i = 0; i < ARR_SIZE; i++) {
        lowerCase(dateArr[i].month);// lowercase month string in "date" struct object to compare in case insensitive
        if (findYear == 0 && strcmp(dateArr[i].month, search) == 0) {
            printf("%d %s %d\n", dateArr[i].day, dateArr[i].month, dateArr[i].year);
            hasResult = 1;
        } 
        
        if (dateArr[i].year == findYear) {
            printf("%d %s %d\n", dateArr[i].day, dateArr[i].month, dateArr[i].year);
            hasResult = 1;
        }
    }

    if (hasResult == 0) {
        printf("No information found!!!\n");
    }
}

int main() {
    date dateArr[ARR_SIZE];
    char dateStr[STR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("Enter date: ");
        scanf(" %[^\n]s", dateStr);
        dateArr[i] = convertToDate(dateStr);
    }

    date latestDate = dateArr[0];
    for (int i = 1; i < ARR_SIZE; i++) {
        if (compareDate(dateArr[i], latestDate) > 0) {
            latestDate = dateArr[i];
        }
    }
    printf("\nLatest date is: %d %s %d\n", latestDate.day, latestDate.month, latestDate.year);

    char search[STR_SIZE];
    printf("Search (month/ year): ");
    scanf("%s", search);
    searchDates(search, dateArr, ARR_SIZE);
    return 0;
}