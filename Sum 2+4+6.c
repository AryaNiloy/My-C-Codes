#include<stdio.h>
#include<conio.h>
main()
{ int i,s,n;
printf("Enter the value of n:");
scanf("%d",&n);
s=0;
for(i=2;i<=n;i=i+2)
s=s+i*i;
printf("The sum is=%d",s);
}
