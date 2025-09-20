#include <stdio.h>
int x;//uninitialized global variable has default value 0
int main() {
    int y;
    printf("x=%d, y= %d\n",x,y);//Value of x is supposed to be 0 & y is supposed to be garbage
    printf("Value of x is supposed to be 0 & y is supposed to be garbage");
    return 0;
}
