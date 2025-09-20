#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
char str[n][6];
int arr[n][6];
for(int i=0;i<n;i++)
{
    scanf("%s",str[i]);
}
for(int i=0;i<n;i++)
{for(int j=0;j<6;j++)
{
  arr[i][j]=str[i][j]-'0';
}
}
for(int i=0;i<n;i++)
{

    if((arr[i][0]+arr[i][1]+arr[i][2])==(arr[i][3]+arr[i][4]+arr[i][5]))
    {printf("YES\n");}
    else{printf("NO\n");}
}

}