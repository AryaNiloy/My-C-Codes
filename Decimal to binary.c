#include<stdio.h>
int main()
{
    int dec;
    printf("Enter a decimal number ");
    scanf("%d",&dec);
    int rem[100],quo=dec/2;

    int i=0;
while(quo!=0)
{
    quo=dec/2;
    rem[i++]=dec%2;
    dec=quo;
}
for(int j=i-1;j>=0;j--)
{printf("%d",rem[j]);}
}
