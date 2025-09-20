#include<stdio.h>
int main()
{ 

    int t;
    scanf("%d",&t);
    char str[]="codeforces";
    char in[11];
    
    for(int i=0;i<t;i++)
    {  scanf("%s",in);
    int count=0;
        for(int j=0;j<10;j++)
        {if(str[j]!=in[j])
        {count++;}}
        printf("%d\n",count);


    }
}