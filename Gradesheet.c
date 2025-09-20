#include<stdio.h>
int main ()
{
    int a,b,c,d,e,f,total,avgmarks,grades;
    printf("Bangla ");scanf("%d",&a);
    printf("Enlish ");scanf("%d",&b);
    printf("Math ");scanf("%d",&c);
    printf("Physics ");scanf("%d",&d);
    printf("Chemistry ");scanf("%d",&e);
    printf("Biology ");scanf("%d",&f);

    total=a+b+c+d+e+f;

    printf("Total marks %d\n",total);

    if (a>=80 && a<=100)

    {printf("Bangla A+ ");}

    else if (a>=70 && a<79)
    {
        printf("Bangla A ");
    }
    else if (a>=60 && a<69)
    {
        printf("Bangla A- ");
    }
    else if (a>=50 && a<=59)
    {
        printf("Bangla B ");
    }
    else if (a>=40 && a<49)
    {
        printf("Bangla C ");
    }
    else if (a>=33 && a<39)
    {
        printf( "Bangla D ");
    }
    else if (a>=0 && a<=33)
    {
        printf("Bangla F ");
    }


    else printf("Invalid input");



if (b>=80 && b<=100)
    {printf("English A+ ");}
    else if (b>=70 && b<79)
    {
        printf("English A ");
    }
    else if (b>=60 && b<69)
    {
        printf("English A- ");
    }
    else if (b>=50 && b<=59)
    {
        printf("English B ");
    }
    else if (b>=40 && b<49)
    {
        printf("English C ");
    }
    else if (b>=33 && b<39)
    {
        printf("English D ");
    }
    else if (b>=0 && b<=33)
    {
        printf("English F ");
    }


    else printf("Invalid input");



if (c>=80 && c<=100)
    {printf("Math A+ ");}
    else if (c>=70 && c<79)
    {
        printf("Math A ");
    }
    else if (c>=60 && c<69)
    {
        printf("Math A- ");
    }
    else if (c>=50 && c<=59)
    {
        printf("Math B ");
    }
    else if (c>=40 && c<49)
    {
        printf("Math C ");
    }
    else if (c>=33 && c<39)
    {
        printf("Math D ");
    }
    else if (c>=0 && c<=33)
    {
        printf("Math F ");
    }


    else printf("Invalid input");




if (d>=80 && d<=100)
    {printf("Physics A+ ");}
    else if (d>=70 && d<79)
    {
        printf("Physics A ");
    }
    else if (d>=60 && d<69)
    {
        printf("Physics A- ");
    }
    else if (d>=50 && d<=59)
    {
        printf("Physics B ");
    }
    else if (d>=40 && d<49)
    {
        printf("Physics C ");
    }
    else if (d>=33 && d<39)
    {
        printf("Physics D ");
    }
    else if (d>=0 && d<=33)
    {
        printf("Physics F ");
    }


    else printf("Invalid input");



if (e>=80 && e<=100)
    {printf("Chemistry A+ ");}
    else if (e>=70 && e<79)
    {
        printf("Chemistry A ");
    }
    else if (e>=60 && e<69)
    {
        printf("Chemistry A- ");
    }
    else if (e>=50 && e<=59)
    {
        printf("Chemistry B ");
    }
    else if (e>=40 && e<49)
    {
        printf("Chemistry C ");
    }
    else if (e>=33 && e<39)
    {
        printf("Chemistry D ");
    }
    else if (e>=0 && e<=33)
    {
        printf("Chemistry F ");
    }


    else printf("Invalid input");





if (f>=80 && f<=100)
    {printf("Biology A+ ");}
    else if (f>=70 && f<79)
    {
        printf("Biology A ");
    }
    else if (f>=60 && f<69)
    {
        printf("Biology A- ");
    }
    else if (f>=50 && f<=59)
    {
        printf("Biology B ");
    }
    else if (f>=40 && f<49)
    {
        printf("Biology C ");
    }
    else if (f>=33 && f<39)
    {
        printf("Biology D ");
    }
    else if (f>=0 && f<=33)
    {
        printf("Biology F ");
    }


    else printf("Invalid input");

printf("\nAverage marks in subjects %d",total/6);



}
