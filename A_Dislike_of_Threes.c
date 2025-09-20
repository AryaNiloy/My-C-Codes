#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int arr[100];
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < t; i++)
    {
        int k = arr[i];
        int count = 0;
        int num = 1;

        while(1)
        {
            if(num % 3 != 0 && num % 10 != 3)
            {
                count++;
                if(count == k)
                {
                    printf("%d\n", num);
                    break;
                }
            }
            num++;
        }
    }

    return 0;
}
