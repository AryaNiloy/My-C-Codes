#include <stdio.h>
//1+2+3+.....678
int main() {
    int n = 678;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of the series 1 + 2 + 3 + ... + %d is: %d\n", n, sum);
    return 0;
}

