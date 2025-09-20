#include <stdio.h>
int main ()
{   int r,c,sum=0;
    int marks[10][4]={
        {80,28,89,0},
        {80,28,89,0},
        {80,28,89,0},
        {80,28,89,0},
        {80,28,89,0},
        {80,28,89,0},
        {80,28,89,0},
        {80,28,89,0},
        {80,28,89,0},
        {80,28,89,0}

        };
       for(r=0;r<10;r++)
       {
       for(c=0;c<4;c++)
        {
           marks[r][3]=marks[r][0]+marks[r][1]+marks[r][2];


        }printf("For roll %d total marks %d\n",r+1,marks[r][3]);}


    }
