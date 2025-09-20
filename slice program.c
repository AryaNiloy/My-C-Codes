#include <stdio.h>
#include <string.h>
int main() {
    char in[100];
    gets(in);
    char innew[100]; // Fixed the data type
    strcpy(innew, in);
    char slice[100];
    int i, n, m, j;
    printf("Enter the values of n and m: ");
    scanf("%d %d", &n, &m);
    if (n < 0) {
        n = 0; // Ensure n is not negative
    }
    if (n > strlen(innew)) {
        n = strlen(innew); // Ensure n is not greater than the string length
    }
    if (m < 0) {
        m = 0; // Ensure m is not negative
    }
    if (m > strlen(innew)) {
        m = strlen(innew); // Ensure m is not greater than the string length
    }
    for (i = n-1, j = 0; i < m; i++, j++) {
        slice[j] = innew[i];
    }
    slice[j] = '\0';
    puts(slice);
    return 0;
}
