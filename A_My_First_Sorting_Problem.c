#include<stdio.h>
 int main()
 {int t;
 scanf("%d",&t);
 while(t--)
 {
  int a,b;
  scanf("%d %d",&a,&b);
  if (a>b)
  {int temp=a;
  a=b;
  b=temp;}
  printf("%d %d\n",a,b);  
 }}