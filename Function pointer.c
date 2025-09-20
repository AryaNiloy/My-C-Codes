#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int subtract(int a, int b) {
    return a - b;
}

void calc(int a, int b, int (*op)(int, int))/*function inside function*/ {
    printf("%d\n", op(a, b));
}
int main()
{
    int (*fptr)(int, int);
    fptr=&add;
    printf("%d\n",add(10,8));

      calc(10, 5, subtract);


}
