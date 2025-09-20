#include<stdio.h>
                                                        //function declaration

void pntnmbr(int arr[], int n);                      //void pntnmbr(int *arr, int n);
int main ()
{                                                   //function call
    int arr[]= {1,2,3,4,5,6};
    pntnmbr(arr,6); //arr=&arr[0]
    }

void pntnmbr(int arr[], int n)
{
    for (int i=5;i>=0;--i)
    {
        printf("%d \t",arr[i]);
    }
}
