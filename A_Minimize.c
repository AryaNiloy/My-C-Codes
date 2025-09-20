#include<stdio.h>
int main()
{
    int t;
    int a,b;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++)
    {
      scanf("%d %d",&a,&b);
      int min=10000,j,k,x;
      for(j=a;j<=b;j++)
      {x=((j-a)+(b-j));
       if(x<min)
       {min=x;k=j;}
       }
       printf("%d\n",min);
    }
}