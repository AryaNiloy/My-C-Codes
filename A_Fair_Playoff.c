#include<stdio.h> 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int maxA,minA,maxB,minB;
        if(a>b)
        {maxA=a;
        minA=b;}
        else {maxA=b;
        minA=a;}
        
        if(c>d)
        {maxB=c;
        minB=d;}
        else {maxB=d;
        minB=c;}
        
        if(maxA<minB||maxB<minA)
        {
            printf("NO\n");
        }
        else printf("YES\n");



    }
} 