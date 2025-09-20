#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[51];
        scanf("%s", str);

        int ab = 0, ord = 0; 
        int found = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'U')
                ab++;
            else if (str[i] == 'D')
                ab--;
            else if (str[i] == 'R')
                ord++;
            else if (str[i] == 'L')
                ord--;

            if (ab == 1 && ord == 1)
            {
                found = 1;
                break;
            }
        }

        if (found)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
