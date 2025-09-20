#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello,ChatGPT!";

    // Using sizeof to determine the size of the array
    int sizeOfStr = sizeof(str);
    printf("Size of str: %d bytes\n", sizeOfStr);

    // Using strlen to determine the length of the string
    int lengthOfStr = strlen(str);
    printf("Length of str: %d characters\n", lengthOfStr);

    return 0;
}
