#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[20];
        scanf("%s", str);  
        int len = strlen(str);

        if (len >= 2)
        {
            for (int i = 0; i < len - 2; i++)   
            {
                printf("%c", str[i]);
            }
            printf("i\n");
        }
        else
        {
            printf("%s\n", str);   
        }
    }
    return 0;
}
