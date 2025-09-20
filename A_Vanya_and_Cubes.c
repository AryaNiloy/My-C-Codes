#include<stdio.h>
int main()
{
 int total ;
 scanf("%d",&total);
 int level=0;
 int sum=0;
 while(sum<=total)
 { level++;
    sum=sum+ level * (level + 1) / 2;
 }
 printf("%d",level-1);

}
