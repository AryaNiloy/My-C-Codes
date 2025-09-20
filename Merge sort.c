#include<stdio.h>

void merge(int arr[],int low , int mid, int high)
{
    int index_left=low;
    int index_right=mid+1;
    int temp[high-low+1];
    int k=0;
    while(index_left<=mid && index_right<=high)
    {if(arr[index_right]<=arr[index_left])
    {
        temp[k++]=arr[index_right++];
    }
    else {temp[k++]=arr[index_left++];} 
    }
    while(index_left<=mid)
    {temp[k++]=arr[index_left++];}
    
    while (index_right<=high)
    {temp[k++]=arr[index_right++];}

   for(int i=0;i<k;i++)
   {
    arr[low+i]=temp[i];
   }
    
}

void merge_sort(int arr[],int low,int high)
{
    if(low>=high)
    {return;}
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main()
{ int n;
scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
