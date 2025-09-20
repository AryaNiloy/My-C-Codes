#include <stdio.h>
#include <math.h>
int fact(int n);
int main ()
{
    int f;printf("Enter a number\n");
    scanf("%d",&f);
    printf("The factorial is %d",fact(f));
    return;

}
int fact (int n)
{
    if (n==0 || n==1){return 1;}
int facnm1 = fact(n-1);
int factn = facnm1*n;
return factn;
}
