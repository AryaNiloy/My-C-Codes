#include<stdio.h>
void func()
{
    int a=10;
    static int s=10; //static variable declared inside function retains its value in between function calls
    a=a+2;
    s=s+2;
    printf("a =%d, s = %d\n",a,s);
}
int main()
{
    func();
    func();
    func();
    return 0;

}
