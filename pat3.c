#include<stdio.h>

int main() {

int n,i,j,k;

printf("Enter the value of n: ");

scanf("%d", &n);

for(i=1;i<=n;i++){
   for(j=i;j<=i*2-1;j++) {
       printf("%d ",j);
       }

      for(k=j-2;k>=i;k--)
        { printf("%d ",k);}

printf("\n");
}
}
