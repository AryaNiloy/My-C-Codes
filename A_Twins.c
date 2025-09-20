#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int half=sum/2;
    int min=100;
    int sum2=0;
    int k=n;
    while(k--)
    {for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {int temp = arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
        }

    } 
    }

    int c=0;
int i = 0;
while (i < n && sum2 <= half) {
    sum2 += arr[i];
    c++;
    i++;
}


    printf("%d\n",c);

}