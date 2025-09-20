#include <stdio.h>
int main()
{ int n,m,b;
b=n*m;
for(n=1;n<=10;n=n+1)
{
    for (m=1;m<=10;m=m+1){
        if (m%11== 0 )
        {continue;}
            {printf("%dX%d=%d\n",n,m,n*m);}
    }
}


}
