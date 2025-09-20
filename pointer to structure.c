#include<stdio.h>
#include<string.h>
struct student
    {
        char name [100];
        int roll;
        float cgpa;

        };

        int main ()
   {
       struct student Niloy={"Niloy",51,3.9};
       printf("Your records are %s %d %.2f\n",Niloy.name,Niloy.roll,Niloy.cgpa);

       struct student *ptr= &Niloy;
       printf("Your records are %s %d %.2f",(*ptr).name,(*ptr).roll,(*ptr).cgpa);

   }

