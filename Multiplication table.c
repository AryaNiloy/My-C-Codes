#include <stdio.h>
int main()
{ printf("Multiplication table of your desired number\n");
    int n,m=1q;
    printf("Enter a number ");
    scanf("%d",&n);
    while(m<=10)
    {
        printf("%d X %d = %d\n",n,m,n*m );
        m++;

    }
        return 0;

}
