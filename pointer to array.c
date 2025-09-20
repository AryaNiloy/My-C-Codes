#include<stdio.h>
int main ()
{
    int arr[5]={5,6,7};
    int c=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c++;
        }
    }

    printf("The number of elements in the array is %d\n",n-c);

     int (*ptr)[3];

    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
    ptr = &arr;

      for (int i = 0; i < n; i++)
        printf("%d ", (*ptr)[i]);

}
