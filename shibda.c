#include <stdio.h>

int main ()
{
    double i,n,m,s=0;
printf("Enter number ");
scanf("%lf",&n);

    for (i=1;i<=n;i=i+2)
    { m=m+2;    printf("%0.0lf",i);printf("/%0.0lf",m);
  s=s+(i/m);
  if (i==n)
  {continue;}printf("+");

}printf("= %lf",s);
 }

