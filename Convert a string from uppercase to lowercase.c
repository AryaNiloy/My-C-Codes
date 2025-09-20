#include <stdio.h>
#include <string.h>
void convertToLowercase(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}
int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    convertToLowercase(inputString);

    printf("Lowercase string: %s\n", inputString);

    return 0;
}
