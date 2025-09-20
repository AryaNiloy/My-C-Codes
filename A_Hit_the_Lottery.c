#include<stdio.h>
int main()
{
   int n=0;
int note[5]={100,20,10,5,1};
int money;
scanf("%d",&money);
for(int i=0;i<5;i++)
{
   int count=money/note[i];
   n+=count;
   money=money%note[i];


}

printf("%d",n);

}