#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    { int n,k;
        scanf("%d %d",&n,&k);
        int y=n;
        int arr[101];
        for(int i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        int flag=0;
        for(int j=0;j<n ;j++)
        {
            if(arr[j]==k)
            {
                flag++;
                break;
            }
           
        }
        if(flag!=0)
        {printf("YES\n");}
        else{printf("NO\n");}

    }
}