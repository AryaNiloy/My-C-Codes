#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int h,m;
    while(t--)
    {
        scanf("%d %d",&h,&m);
        int total=(h*60)+m;
        int rem=1440-total;
        printf("%d\n",rem);

    }
}