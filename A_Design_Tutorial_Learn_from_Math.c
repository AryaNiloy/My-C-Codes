#include <stdio.h>

int is_composite(int data)
{
    if (data <= 3) return 0; 
    for (int i = 2; i * i <= data; i++)
    {
        if (data % i == 0)
            return 1;
    }
    return 0; 
}
int main()
{
    int d;
    scanf("%d", &d);
    int a ;
    int b;
    if (d % 2 == 0)
    { a=d/2;
    b=d/2;
      
        while (!(is_composite(a) && is_composite(b)))
        {
            a--;
            b++;
        }
        printf("%d %d\n", a, b);
    }
    else
    {
       
        a = d / 2;
        b = d - a;
        while (!(is_composite(a) && is_composite(b)))
        {
            a--;
            b++;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}