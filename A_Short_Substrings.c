#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char arr[100];
        scanf("%s",arr);
        int len =strlen(arr);
        printf("%c",arr[0]);
        for(int j=1;j<len;j++)
        {if(j%2!=0)
            {printf("%c",arr[j]);}
    }printf("\n");
}
}