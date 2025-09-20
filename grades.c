#include <stdio.h>
int main()
{
    int a;
    printf("Enter marks ");
    scanf("%d",&a);
    printf("Grade is ");
 if (a<30){
        printf("C");
    }
    else if (a>=30 && a<70)
    {
        printf("B");
    }
    else if (a>=70 && a<90)
    {
        printf("A");
    }
    else if (a>=90 && a<=100)
    {
        printf("A+");
    }
    else printf("Invalid input");
    return 0;
}
