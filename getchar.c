#include <stdio.h>
#include <string.h>
int main() {
    char first_letter, name[100];
    printf("Write your name: ");
    // Read the first letter
    first_letter = getchar();
    // Consume the newline character
    getchar();
    printf("First letter of your name is: %c\n", first_letter);
    printf("Enter the second part of your name: ");
    fgets(name, 100, stdin);
    printf("You entered: %s", name);
    return 0;
}
