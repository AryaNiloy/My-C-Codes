#include<stdio.h>
#include<stdlib.h>
int difcheck(int arr[],int head,int tail,int d,int n,int currlen,int maxlen)
{   
    if(tail==n)
    {return maxlen;}
        
    int diff=arr[tail]-arr[tail-1];
    if(diff<=d)
    { 
        currlen++;
        if(currlen>maxlen)
        {
            maxlen=currlen;
        } 
    }
    
    else{      
    currlen=1;
        }
   return difcheck(arr,tail,tail+1,d,n,currlen,maxlen);
       }
          

int compare(const void *a,const void *b)
{
    return (*(int*)a- *(int*)b);
}
int main()

{
    int t;
    int flag=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,d;
        scanf("%d %d",&n,&d);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
      qsort(arr,n,sizeof(int),compare);

        int currlen=1;
        int maxlen=1;
       int head=0;
       int tail=head+1;

       int f=difcheck(arr,head,tail,d,n,currlen,maxlen);
        printf("%d\n",n-f);

    }
}