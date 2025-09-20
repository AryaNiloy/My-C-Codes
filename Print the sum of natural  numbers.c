#include<stdio.h>
int main ()
{
    int sum=0,i,n;
    printf("Enter the number u want to count sum from ");
    scanf("%d",&i);
    printf("Enter the number u want to count sum to ");
    scanf("%d",&n);
    while (i<=n)
    {
    sum = sum+ i;
    i++;
    printf("%d\n",i-1);

    }
printf("%d\n",sum);

}
