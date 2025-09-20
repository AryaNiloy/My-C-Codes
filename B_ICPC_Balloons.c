#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char str[100];
        scanf("%s",str);
        int freq[26]={0};
        int i=0;
        int sum=0;
        while(str[i]!='\0')
        {freq[str[i]-'A']++;
        i++;
        }
        /*int j = 0;
int unique = 0;
while (freq[j] != '\0')   //   major bug
{
    if (freq[j] != 0)
        unique++;
    j++;
} doesnt work bcz freq is an int array not string 
*/
        int j=0;
        int unique=0;
        while(j<26)
        {
            if(freq[j]!=0)
            {unique++;}
            j++;
        }

        printf("%d\n",n+unique);


    }
}