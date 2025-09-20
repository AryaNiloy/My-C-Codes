#include <stdio.h>

#define MAX 200001

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        if(n < 3)
        {
            printf("-1\n");
            continue;
        }

        if(n == 3)
        {
            int all_same = 1;
            for(int i = 1; i < n; i++)
            {
                if(arr[i] != arr[0])
                {
                    all_same = 0;
                    break;
                }
            }
            if(all_same)
                printf("%d\n", arr[0]);
            else
                printf("-1\n");
            continue;
        }

        int freq[MAX] = {0};
        int found = 0;

        for(int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
            if(freq[arr[i]] == 3)
            {
                printf("%d\n", arr[i]);
                found = 1;
                break;
            }
        }

        if(!found)
            printf("-1\n");
    }

    return 0;
}
