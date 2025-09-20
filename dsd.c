#include <stdio.h>
int main()
{
    int i,n,a;

    printf("Enter number ");
    scanf("%d",&i);

    for (n=1;n<=10;n++){
a=i*n;
    printf("%d x %d = %d\n",i,n,a);
}
}
