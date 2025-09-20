//File pointer is a hidden  structure that needs to be created for opening a file
// A file pointer that points to this structure and helps to access them
#include<stdio.h>
int main ()
{ //Opening a file
    FILE *fptr;
    fptr=fopen("Test.txt","w");
    fptr=fopen("Test.txt","r");
    if (fptr==NULL)
    {
        printf("File doesn't exist");
    }
    else
        { fclose(fptr);}


}
/* File opening modes
   r to read
   rb to read in binary
   w to write
   wb to write in binary
   a to append */
