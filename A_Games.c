#include<stdio.h>
int main()
{int h[100];
int a[100];
int n;
int count=0;
scanf("%d",&n);
for (int i=0;i<n;i++)
{
scanf("%d %d",&h[i],&a[i]);
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {if (h[i]==a[j])
    {count++;}
    
    }
    }
    printf("%d",count);
}