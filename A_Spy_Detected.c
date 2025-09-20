#include<stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int arr[n];

        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        int temp0 = 0, temp1 = 0;
        int mis = 0;

        if(arr[mis] != arr[mis + 1])
        {
            temp0 = arr[mis];
            temp1 = arr[mis + 1];

            if(arr[mis + 2] == temp0)
            {
                printf("%d\n", mis + 2);
            }
            else
            {
                printf("%d\n", mis + 1); 

            }
        }
        else
        {
            mis = 2;
            while(mis < n)
            {
                if(arr[mis] != arr[0])
                {
                    printf("%d\n", mis + 1); 
                    break;
                }
                mis++;
            }
        }
    }

    return 0;
}
