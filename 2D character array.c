#include<stdio.h>
int main()
{
char saarc[7][100]={"Bangladesh","India","Pakistan","Nepal","Myanmar","Bhutan","Maldives"};
int r;
for(r=0;r<7;r++)
{
  printf("%s\n",saarc[r]);
}
int c,ken;
for(r=0;r<7;r++)
{
int len=strlen(saarc[r]);
for(c=0;c<len;c++)
{
    printf("%c 3",saarc[r][c]);
}printf("\n");
}

}
