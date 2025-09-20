#include<stdio.h>
int countOdd (int arr[],int n );

int main ()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    printf("%d",countOdd(arr,9));
    return 0;


}
int countOdd(int arr[],int n )
{
    int count= 0;
    for(n=0;n<9;n++)
    { if(arr[n]%2!=0)
        {
            count++;
        }
    }return count;
}
