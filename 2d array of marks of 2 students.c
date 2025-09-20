#include <stdio.h>
int main ()
{
    int marks[2][3];
    marks [0][0]=89;
    marks [0][1]=84;
    marks [0][2]=87;
    marks [1][0]=90;
    marks [1][1]=83;
    marks [1][2]=87;
    printf("%d\n",marks[1][2]);
    printf("%d\n",marks[1][1]);
    printf("%d\n",marks[0][2]);
    printf("%d\n",marks[0][0]);
}
