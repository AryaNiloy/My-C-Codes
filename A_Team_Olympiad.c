#include<stdio.h>
int main()
{
int d;
scanf("%d",&d);
int n=d;
int acount=0,bcount=0,ccount=0;
int arr[n];


int a[n],b[n],c[n];
for (int i = 0; i < n; i++) {
    a[i] = 0;
    b[i] = 0;
    c[i] = 0;
}
for(int i=0;i<n;i++)
{scanf("%d",&arr[i]);
if(arr[i]==1)
{a[acount++]=i+1;}
if(arr[i]==2)
{b[bcount++]=i+1;}
if(arr[i]==3)
{c[ccount++]=i+1;}
}
  int gcount = acount;
    if (bcount < gcount) 
    {gcount = bcount;}
    if (ccount < gcount) 
    {gcount = ccount;}

printf("%d\n",gcount);
for(int i=0;i<gcount;i++)
{printf("%d %d %d\n",a[i],b[i],c[i]);}
}