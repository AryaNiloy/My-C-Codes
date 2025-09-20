#include<stdio.h>
int partition(int arr[],int low, int high)
{
    int pivot=arr[high];
    int i,j,t;
    for(int i=low-1,j=0;j<high;j++)
    {
        if(arr[j]<pivot)
        { i++;
         t=arr[j];
         arr[j]=arr[i];
         arr[i]=t;
        }
    }
    t=arr[high];
    arr[high]=arr[i+1];
    arr[i+1]=t;
    return i+1;
}
void quick_sort(int arr[],int low, int high)
{
    int p=partition(arr,low,high);
    quick_sort(arr,low,p-1);
    quick_sort(arr,p+1,high);
}
int main()
{
 int n;
 scanf("%d",&n);
 int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int k=0;
quick_sort(arr,k,n-1);
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}

}
