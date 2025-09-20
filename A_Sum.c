#include<stdio.h>
int main()
{int i,j;
int n;
scanf("%d",&n);
int arr[n][3];
for( i=0;i<n;i++)
{
    for( j=0;j<3;j++)
    {
        scanf("%d ",&arr[i][j]);
    }

}
for(int k=0;k<n;k++)
{
    if((arr[k][0]+arr[k][1]==arr[k][2])||(arr[k][0]+arr[k][2]==arr[k][1])||(arr[k][1]+arr[k][2]==arr[k][0]))
    {printf("YES\n");}
    else{printf("NO\n");}

}



}