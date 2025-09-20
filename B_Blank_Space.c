#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[101];
        for(int i=0;i<n;i++)
        {scanf("%d",&arr[i]);}
        int c=0;int max=0;
        for(int i=0;i<n;i++)
        {

            if(arr[i]==0)
            {c++;
            if(c>max)
            {max=c;}
            if(arr[i+1]!=0)
            {c=0;}
            }

        }
        printf("%d\n",max);
    }
}