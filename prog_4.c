/* write a program to input marks of five subjects Physics , English , Maths , 
Computer ,Chemistry .Calculate percentage and grade according to the following:
percentage >= 90 : Grade A
percentage >= 80 : Grade B
percentage >= 70 : Grade C
percentage >= 60 : Grade D
percentage >= 50 : Grade E
percentage >= 40 : Grade F
*/
#include <stdio.h>

int main() {
    float physics, english, maths, computer, chemistry;
    float totalMarks, percentage;
    char grade;

    // Input marks for each subject
    printf("Enter marks for Physics: ");
    scanf("%f", &physics);

    printf("Enter marks for English: ");
    scanf("%f", &english);

    printf("Enter marks for Maths: ");
    scanf("%f", &maths);

    printf("Enter marks for Computer: ");
    scanf("%f", &computer);

    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);

    // Calculate the total marks
    totalMarks = physics + english + maths + computer + chemistry;

    // Calculate the percentage
    percentage = (totalMarks / 500) * 100;

    // Determine the grade based on the percentage
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Display the percentage and grade
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
