/* write a program to read year from the user and check wheter that year is a leap year or not
year=2004.*/
#include <stdio.h>

int main() {
    int year;

    // Read the year from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0; 
}
