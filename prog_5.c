/*Write a C program to read three test scores of a student and find the average of best two scores. 
Assume a test of MM 25 marks each. */
#include <stdio.h>

int main() {
    int score1, score2, score3;
    
    // Input the three test scores
    printf("Enter the first test score (out of 25): ");
    scanf("%d", &score1);
    
    printf("Enter the second test score (out of 25): ");
    scanf("%d", &score2);
    
    printf("Enter the third test score (out of 25): ");
    scanf("%d", &score3);

    // Find the minimum score among the three
    int min_score = score1;
    if (score2 < min_score) {
        min_score = score2;
    }
    if (score3 < min_score) {
        min_score = score3;
    }

    // Calculate the average of the best two scores
    int average = (score1 + score2 + score3 - min_score) / 2;

    printf("The average of the best two scores is: %d\n", average);

    return 0;
}
