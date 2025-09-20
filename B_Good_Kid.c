#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[1000];
        
        for(int i=0;i<n;i++)
        {
         scanf("%d ",&arr[i]);

        }
        int min=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<min)
            {min=arr[i];}
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==min)
            {arr[i]=arr[i]+1;
            break;}
        }

        int product=1;
        for(int i=0;i<n;i++)
        {
            product=product*arr[i];
        }
        printf("%d\n",product);

    }

}