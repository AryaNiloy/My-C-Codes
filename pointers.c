#include<stdio.h>
int main()
{
    int x;
    int *poi;
    poi =&x;
    *poi = 1;
    printf ("x=%d\n",x);
    printf("*poi=%d\n",*poi);

    *poi+=5;
    printf ("x=%d\n",x);
    printf("*poi=%d\n",*poi);

(*poi)++;
printf ("x=%d\n",x);
    printf("*poi=%d\n",*poi);

}
