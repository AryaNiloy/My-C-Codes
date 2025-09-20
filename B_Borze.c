#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10000];
    scanf("%s",arr);
 
    for(int i=0;arr[i]!='\0';i++)
    {
        if (arr[i]=='.')
        {printf("0");}
        else if(arr[i]=='-'&&arr[i+1]=='.')
        {printf("1");
        i=i+1;}
        else if(arr[i]=='-'&&arr[i+1]=='-')
        {printf("2");
        i=i+1;}
    }
}