#include<stdio.h>
int main ()
{
    int n,i,swap,j,flag=0,list[100];
    printf("Entter a digit\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&list[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (list[j]>list[j+1])
            {
                swap=list[j];
                list[j]=list[j+1];
                list[j+1]=swap;
            }flag=1;
        }if (flag=0)
    break;
    }
}
