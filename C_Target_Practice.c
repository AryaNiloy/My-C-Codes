#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int total = 0;
        char arr[10][10];
        
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                scanf(" %c", &arr[i][j]); 
            }
        }

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr[i][j] == 'X')
                {
                    int ring_i = i < 9 - i ? i : 9 - i;
                    int ring_j = j < 9 - j ? j : 9 - j;
                    int ring = ring_i < ring_j ? ring_i : ring_j;
                    total += ring + 1;
                }
            }
        }

        printf("%d\n", total);
    }

    return 0;
}
