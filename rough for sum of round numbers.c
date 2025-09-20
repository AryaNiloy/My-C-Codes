#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
int max;
if (x>y)
{max=x;}
else max=y;
int less;
less=(6-max)+1;
if(less==1)
{printf("1/1");}
if(less<1)
{printf("0/1");}
else {printf("%d",less/6);}
}
