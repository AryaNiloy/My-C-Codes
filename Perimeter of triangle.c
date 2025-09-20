#include<stdio.h>
int main()
{
    float a,b,c,p;
    a=9.4,b=4.2,c=10.6;
    p=a+b+c;
    if ((a+b>c) && (b+c>a) && (c+a>b))
{
    printf("Perimeter of triangle=%f",p);
}
else
{
    printf("The sides provided by you are invalid");
}
}
