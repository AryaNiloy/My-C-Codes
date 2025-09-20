#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[6];
        scanf("%s",str);
        int b=0,a=0;
        for(int i=0;i<5;i++)
        {if(str[i]=='A')
        {a++;}
        else b++;}
        if(b>a)
        {printf("B\n");}
        else printf("A\n");
    }
}