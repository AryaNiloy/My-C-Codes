#include <stdio.h>
int main()
{
    int age=22;
    int *poi = &age ;
    int old =*poi ;
    printf ("%u\n",poi);
    printf ("%u\n",&age);
    printf ("%u\n",&poi);
    printf ("%d\n",age);
    printf ("%d\n",&age);

    printf ("%d\n",poi);
    printf ("%d\n",&poi);
    printf ("%d\n",*poi);
}
