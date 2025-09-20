#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        long long arr[n];      
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);  
            sum += arr[i];
        }

        long long root = sqrt((long double)sum); 
        if (root * root == sum)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
