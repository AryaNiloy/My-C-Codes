#include<stdio.h>
#include<string.h>
 int main()
 {
    char str[101];
    scanf("%s",str);
    int match=1,i=0;
    int len=strlen(str);
    if (len<7)
    {printf("NO\n");}
    else{
    for(int j=0;j<len;j++)
    {
      if(str[i]==str[i+1])
      {match++; if (match==7)
      {printf("YES\n");
      break;}}
      
     else {match=1;}
      i++;
    }
    if(match<7)
      {printf("NO\n");}
    }
      
     
 }
