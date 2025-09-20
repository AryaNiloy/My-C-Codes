#include<stdio.h>
int main()

{
    int n,m=1;
    printf("Input a number ");
    scanf ("%d",&n);
    for(;m<=10;)
    {
        printf("%d X %d = %d\n",n,m,n*m);m++;
    }
}
