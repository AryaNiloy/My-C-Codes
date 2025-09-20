#include<stdio.h>
#include<string.h>
int strlength(char c[]);
int main ()
{ char c[100];
int count;
gets(c);
printf("Letters in your name is %d\t",strlength(c));
printf("Characters in your name %d",strlen(c));
return 0;
}
int strlength(char c[])
{
    int count=0,flag=0;
    for (int i=0;c[i]!='\0';i++)
    {count ++;
    if (c[i]==' ')
    {
        flag ++;
    }
    }
   printf ("Spaces u have used %d\t",flag);
    return (count-flag) ;
}
