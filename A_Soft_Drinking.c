#include<stdio.h>
int find_min(int arr[], int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
   int n,k,l,c,d,p,nl,np;
   scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
   int mili=(k*l)/nl;
   int slice=c*d;
   int salt=(p)/np;
   int toasts[3]={mili,slice,salt};
   int min=find_min(toasts,3);
   printf("%d",min/n);



}