#include<stdio.h>
int main()
{

    int r,b;
    scanf("%d %d",&r,&b);
    int p,l;
    if(r>b)
    {p=b;
    l=r-b;}
    else{p=r;
    l=b-r;}
    printf("%d ",p);
    if(l%2==0)
    {printf("%d",l/2);}
    else{printf("%d",(l-1)/2);}
}