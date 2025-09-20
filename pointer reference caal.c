#include<stdio.h>
void dowork(int a, int b,int *sum, int *pro, int *div);

int main()
{ int a=3,b=5;
int sum,pro,div;
dowork(a, b,&sum, & pro,&  div);
printf ("sum=%d\n pro=%d\n div=%d",sum,pro, div);

}
void dowork(int a, int b, int *sum, int *pro, int *div)
{
    *sum=a+b;
    *pro=a*b;
    *div=b/a;
}
