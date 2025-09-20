#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int arr[t];
    int small=-1;
    int len=0;
    int max2=0;
    int max=0;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=small)
        {   len++;
            small=arr[i];
            max2=len;
        }
        if(max2>max)
        {max=max2;}
        if(arr[i]<small)
        {
            len=1;
            small=arr[i];
        }
    }
    printf("%d",max);
    

}