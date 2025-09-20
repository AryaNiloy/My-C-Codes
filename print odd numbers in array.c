#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i;

    while (i<=20)

    {i++;
   if(i%2!=0)
   {
       continue;
   }
        printf("%d\n",array[i]);
    }}
