#include<stdio.h>
int main ()
{
    int n,i,fact=1;
    printf("Enter number ");
    scanf("%d",&n);
     printf("%d!=",n);
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
        if (i==n){continue;}
        printf("%dX",i);
    }
   printf("%d",n);
   printf("=%d\n",fact);
}
