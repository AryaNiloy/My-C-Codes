#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=0)
    {
        printf("The number is positive ");
        if (a%2==0)
        {
            printf("and even");
        }
        else if(a%2!=0)
        {
            printf("and odd");
        }    }
    else printf("The number is negative");
    return 0;
}
