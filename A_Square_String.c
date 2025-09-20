#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char arr[101];
        scanf("%s",arr);
        int len=strlen(arr);
        if(len==1||len%2!=0)
        {
            printf("NO\n");
            continue;
        }
        else{

            char str1[51],str2[51];
            strncpy(str1,arr,len/2);
            str1[len/2]='\0';
            strncpy(str2,arr+len/2,len/2);
            str2[len/2]='\0';
            if(strcmp(str1,str2)==0)
            {
                printf("YES\n");
            }
            else{printf("NO\n");}
        }
    }
}