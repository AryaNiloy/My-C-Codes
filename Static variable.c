#include<stdio.h>
int a;
static int b;//static variable can be declared under global scope and function scope
//global variables if not initialized they are assigned 0 as default value
void func()
{
    a=a+1;
    b=b+1;
}
int main()
{
    func();
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    func();
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    func();
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
