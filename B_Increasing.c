#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {   int c=0;
        int arr[10000];
        int n;
        scanf("%d",&n);
   
        for(int i=0;i<n;i++)
        {scanf("%d",&arr[i]);}
             if(n==1)
        {printf("YES\n");
        continue;}
        int temp=0;
        for(int i=0;i<n;i++)
        {  
            for(int j=i+1;j<n;j++)
            {if (arr[j]==arr[i])
            {c++;
            break;}}
        }
        if(c==0)
        {
            printf("YES\n");
        
        }
        else {printf("NO\n");}

    }
}