#include <stdio.h>

int main() {

    // Input from the user for a string
    char userStr[100];  // Assuming a maximum length of 100 characters
    printf("Enter a string: ");
    scanf(" %[^\n]", &userStr);  // %[^\n] is used to read the whole line until a newline character


    // Input from the user for a character
    char userChar;
    printf("Enter a character: ");
    scanf(" %c", &userChar);


    // An input already given in the code
    char preDefinedChar = 'X';
    char preDefinedStr[] = "Hello, World!";

    // Displaying the inputs
    printf("\nUser character: %c\n", userChar);
    printf("User string: %s\n", userStr);
    printf("Predefined character: %c\n", preDefinedChar);
    printf("Predefined string: %s\n", preDefinedStr);

    return 0;
}
