#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{int
i,s=0,n;
printf("Enter the value of n=");
scanf("%d",&n);
for(i=2;i<=n;i=i+3)
s=s+pow(i,3);
printf("Summation is %d",s);
}
