
#include<stdio.h>
int main ()
{
    int num[100],i,pos=-1,sea,n;
    printf("Enter a digit ");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&num[i]);
    }
    printf("Enter the number you want to search ");
    scanf("%d",&sea);

    for (i=0;i<n;i++)
    {
        if (sea==num[i])
            {pos=(i+1);}}


    if (pos==-1)
        printf ("%d isnt in the list",sea);


       else
        printf("%d is found at position %d",sea,pos);


}

