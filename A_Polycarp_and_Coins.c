#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int c1 = n / 3;
        int c2 = n / 3;

        if (n == 1)
        {
            printf("1 0\n");
            continue;
        }
        if (n == 2)
        {
            printf("0 1\n");
            continue;
        }

        if (n % 3 == 1)
        {
            c1++;
        }
        else if (n % 3 == 2)
        {
            c2++;
        }

        printf("%d %d\n", c1, c2);
    }

    return 0;
}
