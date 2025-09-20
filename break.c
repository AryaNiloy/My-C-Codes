#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    while (n<=100)
    {
        printf("%d\n",n);n++;

        if (n>19)
        {printf("Nice");
            break;
        }
}
    }
