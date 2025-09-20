#include <stdio.h>

int main() {
    int n, k;
    int temp;
    int flag = 0;
    int av = 0; // Initialize av with -1 to avoid undefined behavior if no zero is found.

    scanf("%d %d", &n, &k);
    int arr[101];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort array in descending order using bubble sort
    for (int j = 0; j < n - 1; j++) {
        for (int l = 0; l < n - j - 1; l++) {
            if (arr[l] < arr[l + 1]) {
                temp = arr[l];
                arr[l] = arr[l + 1];
                arr[l + 1] = temp;
            }
        }
    }

    // Find the first zero in the sorted array
    for(int y = 0; y < n; y++) {
        if (arr[y] == 0) {
            av = y;
            break;
        }
    }

    // Check if 'av' satisfies the condition
    if (av <= k - 1) {
        printf("%d", av);
        return 0;
    } else {
        // Count how many elements are equal to the k-th element (0-indexed)
        for (int x = k - 1; x < n; x++) {
            if (arr[k - 1] == arr[x]) {
                flag++;
            }
        }

        printf("%d", k - 1 + flag);
        return 0;
    }
}

