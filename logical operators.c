#include<stdio.h>
#include<math.h>
int main()
{ int x;
    printf("%d\n",2<3 && 4>6);
    printf("%d\n",2<3 || 4>6);
    printf("%d\n",!(2<3 || 4>6));
    printf("%d\n",!(2<3 && 4>6));
    printf("Enter a number ");
    scanf("%d",&x);
    if (x%2==0){
    printf("The number is even");}
    else printf("The number is odd");}


/* priority order
1. !
2.*,/,%
3.+,-
4.<,<=,>,>=
5.==,!=
6.&&
7.||
8.=
*/
