#include<stdio.h>
int main()
{
FILE *p;
char filename[]="my_file.txt";
p=fopen(filename,"w");
fprintf(p,"This is a file created by my program! ");
fprintf(p,"I am so happy.\n");
fclose(p);

p=fopen(filename,"a");
fprintf(p,"Second line written via append\n");
char fn[]="Niloy ";//writing program using for loop
int len= strlen(fn);
for(int i=0;i<len;i++)
{
    fputc(fn[i],p);
}
char ln[20];
printf("Taking input from console/n");
gets(ln);
fputs(ln,p);
fputs("\n",p);
printf("File is written succesfully");
printf("\n");

fclose(p);
return 0;
}
/*Creating a new file – fopen() with attributes as “a” or “a+” or “w” or “w+”
Opening an existing file – fopen()
Reading from file – fscanf() or fgets()
Writing to a file – fprintf() or fputs()
Moving to a specific location in a file – fseek(), rewind()
Closing a file – fclose()*/
