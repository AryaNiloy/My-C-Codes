#include<stdio.h>
 int main()
 {
    int m,n;
    scanf("%d %d",&m,&n);
    int small;
    if(m<n)
    {small=m;}
    else{small=n;}
    if(m<2||n<2)
    {printf("Akshat\n");}
    else if(m%2==0 && n%2==0)
    {printf("Malvika\n");}
    else if(m%2!=0 && n%2!=0)
    {printf("Akshat\n");}
    else if(small >=2 && small%2==0)
    {printf("Malvika\n");}
    else{printf("Akshat\n");}
    
    





 }