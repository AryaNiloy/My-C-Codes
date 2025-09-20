#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {   
        int n;
        scanf("%d", &n);
        int arr[100000];
        int min = 1000000000;

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);  
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }

        if(n == 1)
        {
            printf("0\n");
            continue;
        }

        int diff = 0;
        for(int i = 0; i < n; i++)
        {
            diff += (arr[i] - min);
        }

        printf("%d\n", diff);
    }

    return 0;
}
