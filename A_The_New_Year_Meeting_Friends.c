#include<stdio.h>
int main()
{
int sorted[3];
int input[3];
int x,y,z;
scanf("%d %d %d",&input[0],&input[1],&input[2]);

for(int i=0;i<3;i++)
{
    for(int j=0;j<3-1-i;j++)
    {   if(input[j]>input[j+1])
    {
      
        int temp =input[j];
        input[j]=input[j+1];
        input[j+1]=temp;

    }
    }
}
printf("%d",(input[2]-input[0]));

}