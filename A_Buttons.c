#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if (c%2==1&& a>=b)
        {printf("First\n");}
        else if(c%2==1&& a<b)
        {
            printf("Second\n");
        }
        else if(c%2==0&&a<=b)
        {printf("Second\n");}
        else if(c%2==0&&a>b)
        {printf("First\n");}

    }
    return 0;
}