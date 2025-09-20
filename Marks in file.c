#include<stdio.h>
int main()
{
   FILE *fp_in,*fp_out;
   char *mIn="math.txt";
   char *bIn="bangla.txt";
   char *eIn="english.txt";
   char *rOut="Average.txt";
   int bmarks[10],emarks[10],mmarks[10];


   int result[10];
   printf("Enter the marks of math\n");
   fp_in=fopen(mIn,"w");
   for(int i=0;i<10;i++)
   {
       scanf("%d",&mmarks[i]);
       fprintf(fp_in, "For roll %d marks in Math is %d\n",i+1,mmarks[i]);
   }


   printf("Enter the marks of english\n");
   fp_in=fopen(eIn,"w");
   for(int i=0;i<10;i++)
   {
       scanf("%d",&emarks[i]);
       fprintf(fp_in, "For roll %d marks in English is %d\n",i+1,emarks[i]);
   }


   printf("Enter the marks of bangla\n");
   fp_in=fopen(bIn,"w");
   for(int i=0;i<10;i++)
   {
       scanf("%d",&bmarks[i]);
       fprintf(fp_in, "For roll %d marks in Bangla is %d\n",i+1,bmarks[i]);
   }



   fp_out=fopen(rOut,"w");
   for(int i=0;i<10;i++)
   {
       result[i]=(mmarks[i]+emarks[i]+bmarks[i])/3;
       printf("Average marks of roll %d is %d\n",i+1,result[i]);
       fprintf(fp_out,"Average marks of roll %d is %d\n",i+1,result[i]);
   }



   fclose(fp_in);
   fclose(fp_out);
}
