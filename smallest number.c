#include<stdio.h>
int main ()

{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a<b && b<c )
    {
        printf("%d is the smallest number",a);
    }
    if (b<a && a<c)
    {
        printf("%d is the smallest number",b);
    }
    else {printf("%d is the ssmallest number",c);}
    return 0;
}
