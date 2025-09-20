/*#include <stdio.h>
int main ()
{ int n,x;
   printf("Enter a number ");
   scanf("%d",&n);
   printf("Sum is %d",sum (n));
}
int sum (int n)
{
    if (n!=0)
        return n + sum(n-1);
    else
        return 0;
}*/
#include <stdio.h>

int main() {
    int x;
    printf("input");
    scanf("%d",&x);
    printf("result is %d",fun (x));
	return 0;
}
int fun (int x)
{ if (x==0)
return 1;
else return 7 + fun(x-2);
}

