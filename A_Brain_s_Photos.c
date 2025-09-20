#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char arr[a][b];
    int flag=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        { 
            scanf(" %c",&arr[i][j]);
            if(arr[i][j]=='C'||arr[i][j]=='M'||arr[i][j]=='Y')
            {flag++;}
        }
    }
    if(flag==0)
    {printf("#Black&White\n");}
    else printf("#Color\n");
}