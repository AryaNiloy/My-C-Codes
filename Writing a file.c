#include<stdio.h>
int main ()
{
    FILE *fptr;
    fptr=fopen("Test.txt","w");//deletes what data has been there and writes anew
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');

    fclose(fptr);


}
