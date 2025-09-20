#include<stdio.h>
int main()
{
int a,b,c;
int num[4];
scanf("%d %d %d %d",&num[0],&num[1],&num[2],&num[3]);
for(int i=0;i<4;i++)
{

    for(int j=0;j<4-i-1;j++)
    {
        if(num[j]>num[j+1])
        {
            int temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
        }
    }
}
a=num[3]-num[0];
b=num[3]-num[1];
c=num[3]-num[2];
printf("%d %d %d",a,b,c);
}