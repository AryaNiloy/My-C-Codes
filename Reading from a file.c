#include<stdio.h>
int main()
{   FILE *fptr;
    fptr=fopen("Test.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("Character = %c",ch);
    fclose(fptr);
}
