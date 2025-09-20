#include<stdio.h>
#include<string.h>
struct student
    {
        char name [100];
        int roll;
        float cgpa;

        };

int main()
{
    struct student/*user defined data type*/ s1,s2,s3/*variables*/;
   strcpy(s1.name,"Niloy");
   strcpy(s2.name,"Pramanik");
   s1.roll=5;
   s2.roll=1;
   printf("%s%s roll%d%d",s1.name,s2.name,s1.roll,s2.roll);
}
