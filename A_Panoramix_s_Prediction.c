#include<stdio.h>
int prime(int b)
{int flag=1;
   
    for(int j=2;j<=b/2;j++)
    { 
        if((b%j)==0)
        {flag=0;break;}

    }
    return flag;
}
int main()
{
 int a,b;
 scanf("%d %d",&a,&b);
 for(int j=a+1;j<b;j++)
 {
    if(prime(j)){printf("NO");return 0;}
 }
 if(prime(b))
 {printf("YES");}
 else printf("NO");
 

}