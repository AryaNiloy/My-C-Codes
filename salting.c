#include<stdio.h>
int main()
{
    char pass[100]="test";
    char salt [100]="123";
    char npass[200];
        strcpy(npass,pass);
        strcat (npass,salt);
        puts(npass);



}
