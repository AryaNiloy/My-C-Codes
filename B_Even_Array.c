#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        int arr[1001];
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        int mismatch = 0;

        if (n % 2 == 1)
        {
            if (even == (n / 2) + 1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (((j % 2 == 0) && (arr[j] % 2 != 0)) || ((j % 2 == 1) && (arr[j] % 2 != 1)))
                    {
                        mismatch++;
                    }
                }

                if (mismatch % 2 == 0)
                    printf("%d\n", mismatch / 2);
                else
                    printf("-1\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else if (n % 2 == 0)
        {
            if (odd == even)
            {
                for (int j = 0; j < n; j++)
                {
                    if (((j % 2 == 0) && (arr[j] % 2 != 0)) || ((j % 2 == 1) && (arr[j] % 2 != 1)))
                    {
                        mismatch++;
                    }
                }
                printf("%d\n", mismatch / 2);
            }
            else
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}
