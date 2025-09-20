#include<stdio.h>
#include<string.h>
int main()
{
    char oword[10],rword[10];
    scanf("%s",&oword);
    int len=strlen(oword);
    int j=len-1;//j=len;
    for(int i=0;i<len/2;i++,j--) //int i=0;i=len;i++,j--
    {
        if(oword[i]!=oword[j])
        {
            printf("Not Palindrome");
            return 0;
        }

    }printf("Palindrome");
            return 1;
}
