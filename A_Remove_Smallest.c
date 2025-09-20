#include <stdio.h>


void sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);
        int arr[50];

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        sort(arr, n);

        
        int possible = 1;
        for(int i = 0; i < n - 1; i++) {
            if(arr[i + 1] - arr[i] > 1) {
                possible = 0;
                break;
            }
        }

        if(possible)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
