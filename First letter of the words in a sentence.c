// C Program to demonstrate Printing
// of the first letter of each word
#include <stdio.h>
#include <string.h>

int main()
{
	char str[200] ;
	int i;
	printf("Enter your string\n");
	gets(str);


	// Traversing the Character array
	for (i = 0; i < strlen(str); i++) {

		// To store first character of
		// String if it is not a
		// whitespace.
		if (i == 0 || (i>0 && str[i-1]==' ')) {
			printf("%c ", str[i]);
		}
		}return 0;
	}



