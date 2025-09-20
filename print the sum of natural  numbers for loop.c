#include<stdio.h>
int main()
{
    int i,n,sum=0,j;
     printf("Enter the number u want to count sum from ");
    scanf("%d",&i);
    printf("Enter the number u want to count sum to ");
    scanf("%d",&n);
    for(;i<=n;i++)
    { sum=sum+i;

printf("%d\n",i);
    } printf("%d\n",sum);

}
