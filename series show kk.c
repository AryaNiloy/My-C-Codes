#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{int a,s;
s=0;
a=35;
do{a=a-5;
s=pow(s,3);}
while(a>=5);
printf("res%d",s);
}
