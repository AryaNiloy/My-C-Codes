#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y, n;
        scanf("%d %d %d", &x, &y, &n);

        int result = n - (n - y) % x;
        printf("%d\n", result);
    }

    return 0;
}
