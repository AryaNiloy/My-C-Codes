// C Program to demonstrate Printing
// of the first letter of each word
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = " Niloy Pramanik, a computer science student, doing great in MEC";
	int i, j = 0;


	// Traversing the Character array
	for (i = 0; i < strlen(str); i++) {

		// To store first character of
		// String if it is not a
		// whitespace.
		if (j == 0 && str[j] != ' ') {
			printf("%c ", str[j]);
		}
		// To check whether Character
		// is first character of
		// word and if yes store it.
		else if (i > 0 && str[i - 1] == ' ') {
			printf("%c ", str[i]);
		}
	}
	return 0;
}
