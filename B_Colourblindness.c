#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {   int n;
    scanf("%d",&n);
        char arr1[n+1];
        char arr2[n+1];
        scanf("%s",arr1);
        scanf("%s",arr2);
        
        int flag=1;
        for(int i=0;i<n;i++)
        {
  if((arr1[i]=='R'&&arr2[i]!='R')||(arr2[i]=='R'&&arr1[i]!='R'))
        flag=0;
        }

        
        if(flag==1)
        {printf("YES\n");}
        else printf("NO\n"); 
    }
}