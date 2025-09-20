#include<stdio.h>
main()
{
int i,n,f0,f1,f;
f0=0;
f1=1;
printf("Enter the Number");
scanf("%d",&n);


for(i=0;i<=n;i++)
{
f=f0+f1;
printf("%d ",f);
f1=f0;
f0=f;
}
}
