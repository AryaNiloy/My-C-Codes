#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,n;
        scanf("%d %d %d %d",&a,&b,&c,&n);
        int d1,d2,max;
        if(a>=b && a>=c){max=a; d1=a-b; d2=a-c;}
        else if(b>=a && b>=c){max=b; d1=b-a; d2=b-c;}
        else {max=c; d1=c-b; d2=c-a;}
        int cut = d1 + d2;
        if(n >= cut && (n - cut) % 3 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
