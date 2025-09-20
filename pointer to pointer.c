#include<stdio.h>
int main ()
{

    // taking an integer variable
    int m = 100;
    printf("Format specifier used is %%p\n");
    // pointer variable ptr that stores
    // the address of variable m
    int *ptr = &m;

    // printing the value of variable m
    printf("The Value of Variable m is: %d\n", m);

    // printing the memory address of variable m
    // in hexadecimal format
    printf("The Memory Address of Variable m is: %p\n", &m);

    // printing the value of ptr i.e.
    // printing the memory address of variable m
    // in hexadecimal format using pointer variable
    printf("The Memory Address of Variable m is using ptr: %p\n", ptr);


    int age=33;
    int *poi=&age;
     //address
     printf("My name is \"Niloy\"\n");
     printf("int age=33;\n");
     printf("int *poi=&age;\n");
     printf("Format specifier used is %%d\n");
     printf("using &age %d\n",&age);
     printf("using only age% d\n",age);
     printf("using only poi %d\n",poi);
     printf("using &poi %d\n",&poi);
     printf("using *(&age) %d\n",*(&age));
     printf("using *poi %d\n",*poi);// when we use * it shows the value stored but never the adress




    return 0;


}
