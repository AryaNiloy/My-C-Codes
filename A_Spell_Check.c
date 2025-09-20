#include <stdio.h>
#include <string.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        char str[101];
        scanf("%s", str);

        if (n != 5)
        {
            printf("NO\n");
            continue;
        }

        int freq[256] = {0};  

        char correct[] = "Timur";

        for (int i = 0; i < 5; i++)
            freq[(int)str[i]]++;

       
        for (int i = 0; i < 5; i++)
            freq[(int)correct[i]]--;

        int valid = 1;
        for (int i = 0; i < 256; i++)
        {
            if (freq[i] != 0)
            {
                valid = 0;
                break;
            }
        }

        if (valid)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
