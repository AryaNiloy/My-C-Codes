#include<stdio.h>
 int main()
 {
    int t;
    scanf("%d",&t);
int c=t/2;
printf("%d\n",c);
for(int i=1;i<c;i++)
{printf("2 ");}
if(t%2==0){printf("2 ");}
else printf("3 ");
 }