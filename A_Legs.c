#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==2)
        {printf("1\n");continue;}
        
        int cow=n/4;
        int total=0;
        if(n%4==0)
        {total=cow;}
        else {total=cow+1;}
        printf("%d\n",total);
    }
}