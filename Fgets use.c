#include <stdio.h>

int main()
{
    // array to store string taken as input
    char sentence[10];

    // take user input
    printf("Enter any sentence: ");

    // use the fgets method specifying the size of the array as the max limit
    fgets(sentence, 10, stdin);

    // printing the input value
    printf("You entered: %s", sentence);

    return 0;
}
