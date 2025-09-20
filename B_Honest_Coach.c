#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int diff = 1000000;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int d = abs(arr[i] - arr[j]);
                if (d < diff) {
                    diff = d;
                }
            }
        }

        printf("%d\n", diff);
    }

    return 0;
}
