#include<stdio.h>
int main ()
{
    FILE *fptr;
    fptr=fopen("Test.txt","r");
    printf("%c\n",fgetc(fptr));//read
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));


    fptr=fopen("Test.txt","w");//write
    fputc('M',fptr);
    fputc('A',fptr);
    fputc('N',fptr);
}
