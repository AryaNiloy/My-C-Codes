#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
   int arr[t];
   for(int i=0;i<t;i++)
   {
    scanf("%d",&arr[i]);
   }
   
   int len=1,max=1;;
   for(int i=1;i<t;i++)
   {
    if(arr[i]>arr[i-1])
    {len++;
    if(len>max)
    {max=len;}
    }
    else{len=1;}
   }
   printf("%d\n",max);
}