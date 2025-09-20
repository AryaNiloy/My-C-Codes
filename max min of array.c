#include<stdio.h>
int main()
{
    int num[1000],n,i,max,min;
    printf("Enter number");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for (i=0;i<(n-1);i++)
    {scanf("%d\n",&num[i]);}

    max=num[0];
    for(i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("Max is %d\n",max);

    min=num[0];
    for(i=1;i<n;i++)
    {
        if(min>num[i])
            min=num[i];
    }printf("Min is %d\n",min);

}
