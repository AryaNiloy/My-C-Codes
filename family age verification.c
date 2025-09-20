#include<stdio.h>
int main()
{
    /*Family age verification*/

  int  m,f,s,d,niloy;
  char ch;
  printf ("This is a site that selects family that maintained the policies of Ideal Family by WHO \nPlease input your family details down below");

  printf("Age of father must be 40 at least \nAge difference between father and mother should be minimum 5 years \nAge difference between mother and son must be minimum 17 years \nAge difference between siblings 5 years\n");




  printf("Enter the age of father ");
  scanf("%d",&f);


while   (f>=40)
  {
      printf("Input the age of mother ");
      scanf("%d",&m);
       if (f<40)
  {printf("Father age is inappropriate.Your family is disqualified");break;

  }

  if (f-m>=5)
    {printf("Enter the age of son ");
  scanf("%d",&s);
  if ("f-m<5")
    {printf ("Age difference is'nt right.Your family is disqualified.");break;}

  while (m-s>=15)
    {printf  ("Enter age of daughter ");
  scanf("%d",&d);}

  if(m-s<15)
    {printf("Age of son isnt appropriate.Your family is disqualified");break;}

  while (s-d>=5)

    printf("Your family is what we are looking for.Congrats!!!You are selected");

   if(s-d<5)
    {printf("Age of daughter isnt appropriate.Your family is disqualified.\n");}


  }}
  printf("Thanks for visiting our site");
}
