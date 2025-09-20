#include<stdio.h>

 int main()
 {
     int n;
     int numbers[100000];
     int parts_numbers[100000][5];
     int parts_count[100000];
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
         scanf("%d",&numbers[i]);
     }


     for(int i=0;i<n;i++)
     {   int count=0;
         int num=numbers[i];
         int pow=1;
         while (num!=0)
         {
             int digit=num%10;
             if(digit!=0)

             {
                 parts_numbers[i][count++]=digit*pow;

             }num=num/10;
             pow=pow*10;
         }parts_count[i]=count;
     }

     for(int i=0;i<n;i++)
     {
         printf("%d\n",parts_count[i]);

         for(int j=0;j<parts_count[i];j++)
         {
             printf("%d ",parts_numbers[i][j]);
         }
         printf("\n");
     }
 }
