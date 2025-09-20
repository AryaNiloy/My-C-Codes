#include <stdio.h>
#include"dimik.h"

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define  SWAP(a,b){\
a^=b;\
b^=a;\
a^=b;\
}
int main()
{
    int a = 5, b = 1;
    double x = 1.2, y = 3.1;

    printf("%d\n", MAX(a, b));    // okay
    printf("%lf\n", MAX(x, y));   // also okay if macro is fixed

    printf("%d\n",add(a,b));
    SWAP(a,b);
    printf("a=%d  b=%d",a,b);
}
