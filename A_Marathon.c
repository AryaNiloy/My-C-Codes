#include<stdio.h>
int main()
{
    int a,b,c,d;
    int n;
    scanf("%d",&n);
    int arr[n][4];
    int count[n];
    for(int i=0;i<n;i++)
    {for(int j=0;j<4;j++)
    {scanf("%d",&arr[i][j]); }
      
    }
    int index=0;

    for(int i=0;i<n;i++)
    {count[i]=0;}
    
    for(int i=0;i<n;i++)
    {for(int j=1;j<4;j++)
 
        if(arr[i][index]<arr[i][j])
        {count[i]++;}
    }
    for(int i=0;i<n;i++)
    {printf("%d\n",count[i]);}
}