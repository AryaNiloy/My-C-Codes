#include<stdio.h>
#include<string.h>
int main()
{
    char fstr[]="lion";
    char sstr[]="lion";
    strcmp(fstr,sstr);
    printf("%d",strcmp(fstr,sstr));// if doesn't match, it will show negative

}
