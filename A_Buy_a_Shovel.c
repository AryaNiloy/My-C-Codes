#include<stdio.h>
int main()
{
int price,coin;
scanf("%d %d ",&price,&coin);

int i=1;
int total=0;
while(1){
    

total=price*i;
if((total%10==0)||(total%10==coin))
{break;}

i++;
}
printf("%d",i);
}