#include<stdio.h>
void bubble_sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j + 1] < a[j]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[10000];
        for(int i=0;i<n;i++)
        {
          scanf("%d ",&arr[i]);
        }

     bubble_sort(arr,n);
      int max=arr[n-1];
      int min=arr[0];
      int diff=max-min;
      printf("%d\n",diff);

    }


}