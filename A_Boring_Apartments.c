#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        int len = 0;
        int em = n;

    
        while (em != 0)
        {
            em = em / 10;
            len++;
        }

     
        int row = n;
        while (row >= 10)
        {
            row /= 10;
        }

        int press;
        if (len == 1)
            press = (row - 1) * 10 + 1;
        else if (len == 2)
            press = (row - 1) * 10 + 3;
        else if (len == 3)
            press = (row - 1) * 10 + 6;
        else if (len == 4)
            press = row * 10;

        printf("%d\n", press);
    }

    return 0;
}
