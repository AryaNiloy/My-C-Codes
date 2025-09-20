#include <stdio.h>
#include <stdlib.h> // For malloc, realloc
#include <string.h> // For strlen

int main() {
    char *string = NULL;   // Pointer for dynamically allocated memory
    size_t length = 0;     // Variable to keep track of string length
    ssize_t read;          // Variable for reading characters

    printf("Enter a line: ");
    read = getline(&string, &length, stdin);  // Read the input line

    if (read != -1) {
        // Remove newline character if it exists
        if (string[read - 1] == '\n') {
            string[read - 1] = '\0';
        }
        printf("You entered: %s\n", string);
    } else {
        printf("Error reading input.\n");
    }

    free(string);  // Free dynamically allocated memory

    return 0;
}

