#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[1001];
        int n;scanf("%d",&n);
        scanf("%s", str);

        int max = -1;
        for (int i = 0; str[i] != '\0'; i++)
        {
            int diff = str[i] - 'a' + 1;
            if (diff > max)
                max = diff;
        }
        printf("%d\n", max);
    }
}
