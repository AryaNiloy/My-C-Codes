#include <stdio.h>
int main()
{
    /* int**pptr
    char **pptr
    float ** pptr   */
    // a variable that stores the memory address of another pointer

int price=100.00;
int *ptr=&price;
int **pptr = &ptr;
printf("%d\n",price);
printf("%d\n",*ptr);
printf("%d\n",**pptr);
printf("%d\n",pptr);
printf("%d\n",ptr);




return 0;



}
