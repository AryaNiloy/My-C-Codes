#include <stdio.h>

int main()
{
    // array to store string taken as input
    char sentence2[20];

    // take user input
    printf("Enter any sentence: ");

    // use scanf to get input
    scanf("%[^\n]%*c",sentence2);

    // printing the input value
    printf("You entered: %s\n", sentence2);



    // array to store string taken as input
    char sentence[20];

    // take user input
    printf("Enter any sentence: ");

    // use scanf to take input
    scanf("%[^\n]s", sentence);

    // printing the input value
    printf("You entered: %s.", sentence);






}
