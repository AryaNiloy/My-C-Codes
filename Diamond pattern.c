#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of rows (odd number): ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Please enter an odd number for a symmetric diamond.\n");
        return 1;
    }
    for (i = 0; i < n / 2 + 1; i++) {
        for (j = 0; j < n / 2 - i; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }
    for (i = n / 2 - 1; i >= 0; i--) {
        for (j = 0; j < n / 2 - i; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
