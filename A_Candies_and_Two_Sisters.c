#include<stdio.h>
int main()
{
   int n;

   scanf("%d",&n);

   int candy[10001];
   for(int i=1;i<=n;i++)
   { 
    scanf("%d",&candy[i]);
   }

   for(int j=1;j<=n;j++)
   {
     printf("%d\n",(candy[j]-1)/2);

   }


}