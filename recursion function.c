#include <stdio.h>
#include<math.h>
int sum(int n);
int main ()
{   int a;
    printf("Enter a number ");
    scanf("%d",&a);
    printf("sum is %d",sum(a));
return ;

}
int sum(int n)
{ if (n==1){return 1;}
    int nm1=sum(n-1);
    int nm = nm1 + n;
    return nm;
}


