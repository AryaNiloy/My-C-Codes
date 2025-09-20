#include<stdio.h>
int main ()
{
    char isSunday ;
    char isRaining ;
int yes=1;
int no=0;

    printf ("Is it sunday?\n");
    scanf("%d",&isSunday);

    printf("Is it raining?\n");
    scanf("%d",&isRaining);
    if (isSunday == 1 || isRaining == 1)
    {
        printf("Don't go to the market");}
        else {printf("Go to the market");}
    }


