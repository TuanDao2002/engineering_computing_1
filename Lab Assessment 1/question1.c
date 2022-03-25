/*
    RMIT University Vietnam
    Course: EEET2601 Engineering Computing 1
    Semester: 2022A
    Lab Assessment: 1
    Author: Dao Kha Tuan
    ID: s3877347
    Compiler used: gcc 8.1.0
    Created  date: 25/03/2022
    Acknowledgement: None
*/

#include <stdio.h>

int main() {
    int total_hours;
    
    // ask user to enter an integer of total hours
    printf("Enter total hours: ");
    scanf("%d", &total_hours);

    // print the number of days in double format
    printf("It is %lf days\n", total_hours / 24.0);

    // calculate the number of days in integer format
    int number_of_days = total_hours / 24;

    // calculate the remaining hours after division
    int remaining_hours = total_hours % 24;

    // print out the converted days and hours
    printf("which is %d days and %d hours", number_of_days, remaining_hours);

    return 0;
}