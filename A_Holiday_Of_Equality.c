#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n=t;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
    for(int j=0;j<n-i-1;j++)
    {if(arr[j]>arr[j+1])
    {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;

    }
    }
    }
    int min=arr[0];
    int max=arr[n-1];
    int dif=0;
    for(int i=0;i<n-1;i++)
    {
        dif=dif+(max-arr[i]);
    }
    printf("%d",dif);


}