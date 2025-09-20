#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int minimum(int a,int b)
{
    if(a>b)
    {return b;}
    else {return a;}
}

int main()
{
    char str[101];
    scanf("%s",str);
    int rotation=0;
  
   char current='a';
   for(int i=0;str[i]!='\0';i++)
   {
    int diff=abs(str[i]-current);
    int min=minimum(diff,26-diff);
    rotation=rotation+min;
    current=str[i];
   }
   printf("%d",rotation);
   

}