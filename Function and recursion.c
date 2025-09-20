#include<stdio.h>
void  hello();//function declaration/ prototype
void bye();
int main ()
{
    char ch;
    printf("Enter ");
    scanf("%c",&ch);

    if (ch=='h')
    {
        hello();       // function call
    } else if (ch=='b')
    {
        bye();
    }
    else {printf("no"); }
    return 0;


}
 void hello()
    {
        printf("Hello"); //function definition
    }
     void bye()
    {
      printf("bye");
    }
