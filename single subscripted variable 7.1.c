#include<stdio.h>
int main()
{
    int i;
    float x[10],value,total;
    printf("Enter 10 Real numbers\n");
    for (i=0;i<10;i++)
    {
        scanf("%f",&value);
        x[i]=value;

    }
    total=0.0;
    for(i=0;i<10;i++)
        {total=total+x[i]*x[i];}
    printf("\n");
    for (i=0;i<10;i++)
        {printf("x[%2d]=%5.2f\n",i+1,x[i]);}1
    printf("\n total=%.2f\n",total);
}
