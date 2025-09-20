#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        
        int arr[n + 2]; 
        arr[0] = 0;    
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }
        arr[n + 1] = x; 

        int max_dist = 0;
       
        for(int i = 0; i < n; i++)
        {
            int diff = arr[i + 1] - arr[i];
            if(diff > max_dist)
                max_dist = diff;
        }

        int last_point = 2 * (arr[n + 1] - arr[n]);
        if(last_point > max_dist)
            max_dist = last_point;

        printf("%d\n", max_dist);
    }

    return 0;
}
