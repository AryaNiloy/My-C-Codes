#include <stdio.h>

int hasOddDivisor(long long n) {
    while (n % 2 == 0) {
        n /= 2;
    }
    return (n > 1); 
}

int main() {
    long long t, n;
    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);
        if (hasOddDivisor(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
