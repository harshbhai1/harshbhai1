/*Write a C program to read the value of x from the user and calculate the final value of the function 
F(x) for the following equations as shown:
 F(x) = x2+2 if 0<=x<=10 
 F(x) = x2+2x if 11<=x<=20 
 F(x) = x3+2x2
if 21<=x<=30 
 F(x) = 0 if x>30
 */
#include <stdio.h>

int main() {
    double x, result;

    // Input the value of x
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Calculate F(x) based on the specified conditions
    if (x >= 0 && x <= 10) {
        result = x * x + 2;
    } else if (x >= 11 && x <= 20) {
        result = x * x + 2 * x;
    } else if (x >= 21 && x <= 30) {
        result = x * x * x + 2 * x * x;
    } else {
        result = 0;
    }

    // Print the final result
    printf("F(x) = %.2lf\n", result);

    return 0;
}
