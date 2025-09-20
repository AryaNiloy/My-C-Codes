#include <stdio.h>
int sum (int a , int b);
void printTable(int n);

int main ()
{
    int n;
    printf("Enter a number");
    scanf ("%d",&n);
    printTable (n); // passing argument / scyual paramter
    return 0;

}
int sum(int x, int y)
{
    return x+y;
}
void printTable (int n)// formal paramter
{ int i;
    for (i=1;i<=10;i++)
    {
        printf ("%d\n",i*n);
    }
}
