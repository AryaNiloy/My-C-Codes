#include <stdio.h>
#include <string.h>
void reverseString(char str[]) {
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);

    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    return 0;
}

