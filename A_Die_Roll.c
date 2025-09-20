#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int max = (x > y) ? x : y;
    int less = 6 - max + 1;

    int g = gcd(less, 6);  

    printf("%d/%d\n", less / g, 6 / g);  

    return 0;
}
