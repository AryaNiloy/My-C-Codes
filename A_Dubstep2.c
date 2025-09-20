#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    scanf("%s", str);

    char sub[] = "WUB";
    int n = strlen(str);
    int m = strlen(sub);
    int space = 0;
for(int i=0;i<n)
{
    if(i+m<=n && strncmp(&str[i],sub,m)==0)
    {
     i+=m;
    }
    else
    {
        if(space){printf(" ");}
        while(i+m<=n && strncmp(&str[i],sub,m)!=0)
        {
            printf("%c",str[i]);
        }
        space=1;
    }
}



}