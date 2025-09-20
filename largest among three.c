#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{ int a,b,c;
printf("Enter the values of a,b,c");
scanf("\n%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
printf("%d is largest",a);
if((b>c)&&(b>a))
printf("%d is largest",b);
if((c>a)&&(c>b))
printf("&d is largest",c);
}
