#include<stdio.h>
int main()
{
    char text[]={"codeforces"};

    int t;
    scanf("%d",&t);
    char alpha;
    for(int i=0;i<t;i++)
    { 
        scanf(" %c",&alpha);
          int found=0;
        for(int j=0;j<10;j++)
        {if(alpha==text[j])
        {found++;break;}
        }
        if(found==1) 
        {printf("YES\n");}
        else{printf("NO\n");}
    }
}
