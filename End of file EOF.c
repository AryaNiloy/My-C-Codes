#include<stdio.h>
int main ()
{
    FILE *fptr;
    fptr=fopen("Test.txt","r");
    // EOF is like NULL
    char ch;
    ch=fgetc(fptr);
    while (ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
}
