#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int p1=0;
int p2=0;
int lindex=0;
int rindex=n-1;
int pat=0;
for(int i=0;i<n;i++)
{if(pat==0){
if (arr[lindex]>arr[rindex])
{p1=p1+arr[lindex];
lindex++;
pat=1;}
else{p1=p1+arr[rindex];
rindex--;
pat=1;}
}
else if(pat==1)
{
if (arr[lindex]>arr[rindex])
{p2=p2+arr[lindex];
lindex++;
pat=0;}
else{p2=p2+arr[rindex];
rindex--;
pat=0;}

}
}

printf("%d %d",p1,p2);


}