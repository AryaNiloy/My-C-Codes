#include<stdio.h>
int reverse(int array[], int n);
int printarr(int array[], int n);
int main ()
{
    int array[]={1,2,3,4,5};
     reverse(array,(5));
     printarr(array,(5));

}
int reverse(int array[], int n)
{
    int i;
    int firstval,secondval;
    for (i=0;i<n/2;i++)
    {
    firstval=array[i];
    secondval=array[n-1-i];
    array[i]=secondval;
    array[n-1-i]=firstval;
    }
}


int printarr(int array[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
}
