#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int min, max;
        if (a > b)
        {
            max = a;
            min = b;
        }
        else
        {
            max = b;
            min = a;
        }

        int side;
        if (2 * min > max)
        {
            side = 2 * min;
        }
        else
        {
            side = max;
        }

        printf("%d\n", side * side);
    }

    return 0;
}
