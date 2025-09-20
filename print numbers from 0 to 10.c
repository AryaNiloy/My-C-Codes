#include <stdio.h>
int main ()
{
    int i,n;
    printf("Enter the number u want to print from ");
    scanf("%d",&i);
    printf("Enter the number u want to print to ");
    scanf ("%d",&n);
    for(;i<=n;i++)
        printf("%d\n",i);
}
