// write a program in c to read a character from keyboard and find whether it is a number alphabet or symbol

#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch); // Added a space before %c to consume any leading whitespace

    // Making condition for checking alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Character is an alphabet.\n");
    }
    // Condition for checking number
    else if (ch >= '0' && ch <= '9') { // Removed the semicolon here
        printf("Character is a number.\n");
    }
    // If it is neither alphabet nor number, then it's a symbol
    else {
        printf("Character is a symbol.\n");
    }

    return 0;
}
