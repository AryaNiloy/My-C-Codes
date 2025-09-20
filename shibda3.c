#include<stdio.h>
#include<math.h>
int main ()
{ double n,i,p,s=0;
printf("Enter a number ");
scanf("%lf",&n);
for (i=1;i<=n;i++)
{ p=pow(i,3); s=1+(1/(p));
printf("1/%0.0lf^3",i);
if (i==n)
{
    continue;
}printf("+");

}printf("=%lf",s);

}
