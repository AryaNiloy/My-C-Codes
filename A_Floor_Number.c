#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        if(n <= 2)
            printf("1\n");
        else
            printf("%d\n", ((n - 2 + x - 1) / x) + 1);
    }
}
