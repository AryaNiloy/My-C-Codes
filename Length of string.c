#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;
    char name[100];
    printf("Enter your string\n");
    gets(name);
    for (i=0;name[i]!='\0';i++)
    { if (name[i]==' ')
    {
        continue;
    }
        flag ++;
    }
    printf("Number of letters u have put is  %d\n",flag);
    printf("Total characters in your string is %d",flag+1);
}
