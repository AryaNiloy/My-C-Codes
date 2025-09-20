#include<stdio.h>
int main()
{
    int x,y,d,l;

    printf("Enter the two digits\n");
    scanf("%d %d",&x,&y);
        if (x<y)
    {
        d=x;
    }
    else {d=y;}

    for (;d>=1;d--)
    {
        if (x%d==0 && y%d==0)
        {
            printf("GCD is %d\n",d);
            break;
        }
    }
    l=(x*y)/d;
    printf("LCM is %d",l);
}
