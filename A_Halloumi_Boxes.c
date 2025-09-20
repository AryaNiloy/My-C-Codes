#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n];
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] > arr[i])
            {
                flag = 1; 
                break;
            }
        }

        if (k == 1)
        {
            if (flag == 1)
                printf("NO\n");
            else
                printf("YES\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
