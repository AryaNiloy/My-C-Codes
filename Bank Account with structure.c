#include<stdio.h>
#include<string.h>
 typedef struct bankaccount
 {
     char name[100];
     int acn;
     int nid;
 }BA;

int main ()
{   int numaccount,i;
    BA accounts [numaccount];
    printf ("Enter the number of accounts you want to create");
    scanf("%d",&numaccount);
    for(i=0;i<numaccount;i++)
    {
    printf("Enter account holder's name\n");
    scanf("%s",accounts[i].name);
    printf("Enter account no.\n");
    scanf("%d",accounts[i].acn);
    printf("Enter account holder's nid:\n");
    scanf("%d",accounts[i].nid);
    }
    printf("Account holder's name is %s\n",accounts[i].name);
    printf("Account no.\n",accounts[i].acn);
    printf("Nid :",accounts[i].nid);

}
