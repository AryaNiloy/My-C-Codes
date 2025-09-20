#include<stdio.h>
#include<conio.h>
main()
{ int i,n,s=0;
printf("enter the value");
scanf("%d",&n);
for(i=2;i<=n;i+=2){s=s+i;}
printf("the sum %d",s);
}
