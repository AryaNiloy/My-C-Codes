#include<stdio.h>
int main()
{
    int box[5][5]={
    {6,4,7,8,9},
    {3,7,1,9,9},
    {8,6,4,2,7},
    {2,4,2,5,9},
    {4,1,6,7,3}
    };
    int sum;
    for(int r=0;r<5;r++){
            sum=0;
        for(int c=0;c<5;c++){
            sum+=box[r][c];
        }
        printf("Sum of row %d= %d\n",r+1,sum);
    }

    for(int c=0;c<5;c++){
            sum=0;
        for(int r=0;r<5;r++){
            sum+=box[r][c];
        }
        printf("Sum of column %d= %d\n",c+1,sum);
    }


}
