#include<stdio.h>
#include<string.h>
int main ()
{ char name[100],second[100];
gets(name);
printf("First letter %c\n",name[0]);
gets(second);
printf("Second name is ");
for (int i=0;i<strlen(second);i++)
{


 printf("%c",second[i]);

}return 0;
}
