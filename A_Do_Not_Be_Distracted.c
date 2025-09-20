#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        char arr[51];
        scanf("%s", arr);

        int seen[26] = {0};
        char prev = '\0';
        int sus = 0;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] != prev)
            {
                if(seen[arr[i] - 'A'] == 1)
                {
                    sus = 1;
                    break;
                }
                seen[arr[i] - 'A'] = 1;
                prev = arr[i];
            }
        }

        if(sus)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
