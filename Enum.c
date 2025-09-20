#include<stdio.h>
#include<string.h>
#include<time.h>
 enum COLOR{RED,GREEN,BLUE};
 int main()
 {
      clock_t start, end;
    start=clock();
     enum COLOR color;
     printf ("Enter color");
     char col[10];
     scanf("%s",col);
     col[strcspn(col,"\n")]="\0";
     if(strcmp(col,"RED")==0)
     {
         color =RED;
     }
      if(strcmp(col,"GREEN")==0)
     {
         color =GREEN;
     }
      if(strcmp(col,"BLUE")==0)
     {
         color =BLUE;
     }

printf("%d",color);
 end= clock();
    double time=end-start;
    printf("Time required for run %lf",time/CLOCKS_PER_SEC);

 }
