//CT-2020-001 - Rathnayake R.M.T.N.

// Leap year checker

#include <stdio.h>

int leapyear(int year) {
    // Check if the year is divisible by 4
    if (year % 4 == 0) {
        // Check if the year is divisible by 100 but not by 400
        if (year % 100 == 0 && year % 400 != 0) {
            return 0; // Not a leap year
        }
        return 1; // Leap year
    }
    return 0; // Not a leap year
}
void error(int year){

    if (year <= 0) {
        printf("Invalid year. Please input a positive integer.\n");
        return 1;
    }

}


int main() {
    printf("Welcome to the Leap Year Checker!\n");
    printf("This program will determine whether a given year is a leap year or not.\n\n");

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year <= 0) {
        error(year);
        return ;
    }

    if (leapyear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
