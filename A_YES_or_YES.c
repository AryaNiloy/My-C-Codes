#include<stdio.h>
#include<string.h>

int main()
{  
      int n;
      scanf("%d",&n);
  char str[n][4];

  for(int i=0;i<n;i++)
  {scanf("%s",str[i]);}

for(int i=0;i<n;i++)
{for(int j=0;str[i][j]!='\0';j++)
{
    if(str[i][j]>='a'&&str[i][j]<='z')
    {str[i][j]=str[i][j]-32;}
    }
    }
for(int i=0;i<n;i++)
{
    if(strcmp(str[i],"YES")==0)
    {printf("YES\n");}
    else{printf("NO\n");}
}
}