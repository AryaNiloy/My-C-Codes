#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of rows (odd number): ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Please enter an odd number for a symmetric diamond.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
    if ((i + j == n / 2) || (j - i == n / 2) || (i - j == n / 2) || (i + j == (n / 2)*3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
