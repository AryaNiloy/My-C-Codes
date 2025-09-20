#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[m];

    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int min_diff = 1000000000; 
    for (int i = 0; i + n - 1 < m; i++) {
        int diff = arr[i + n - 1] - arr[i];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    printf("%d\n", min_diff);
    return 0;
}
