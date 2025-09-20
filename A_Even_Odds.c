#include <stdio.h>

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    long long oddCount;
    if (n % 2 == 0) {
        oddCount = n / 2;
    } else {
        oddCount = (n / 2) + 1;
    }

    if (k <= oddCount) {
        
        printf("%lld\n", 2 * k - 1);
    } else {
        printf("%lld\n", 2 * (k - oddCount));
    }

    return 0;
}
