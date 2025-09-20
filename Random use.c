#include <stdio.h>

int main()
{
    // array to store string taken as input
    char sentence[20];

    // take user input
    printf("Enter any sentence: ");
    scanf("%s", sentence);

    // printing the input value
    printf("You entered: %s.", sentence);

    return 0;
}
