#include <stdio.h>

int main() {
    int arr[101];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];
    int maxp = 0, minp = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxp = i;
        }
        if (arr[i] <= min) { 
            min = arr[i];
            minp = i;
        }
    }

    int countswap = maxp + (n - 1 - minp);
    if (maxp > minp) countswap--; 

    printf("%d\n", countswap);

    return 0;
}
