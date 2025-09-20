#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
     int arr[x];
     
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }


     for(int i=0;i<x;i++)
     {
        for(int j=0;j<x-1;j++)
        {
            if(arr[j+1]>=arr[j])
            {int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
     }
     int window=x-n;
     int min_diff=10000;
     for(int j=0;j<window;j++)
     { int dif2=0;
        for(int i=j;i<n+j;i++)
        {
            dif2=dif2+(arr[i+1]-arr[i])
        
        }
        if(dif2<min_diff)
        {min_diff=dif22;}
     }



}