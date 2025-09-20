#include<stdio.h>
int  main ()
{
    int x,y,d,t,gcd;
    printf("Enter the two digits\n");
    scanf("%d %d",&x,&y);
    if (x==0)
    {
        t=x;
    }
    else if (y==0)
    {
        t=y;
    }

    else
        { if (x<y)
          {
           {
            while(x!=0)
        { d=x;
        x=y%x;
        y=d;
        } gcd = y;}printf("GCD is %d",gcd);}

        if (y<x)
           {
            {
            while(y!=0)
        { d=y;
        y=x%y;
        x=d;
        } gcd = x;}printf("GCD is %d",gcd);}
    }
}
