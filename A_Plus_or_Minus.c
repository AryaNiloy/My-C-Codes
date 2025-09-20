#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a+b)==c)
        {printf("+\n");}
        else printf("-\n");
    }


}