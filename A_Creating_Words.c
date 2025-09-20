#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {char arr1[100];
        fgets(arr1,100,stdin);
        
    char c1=arr1[0];
    char c3=arr1[4];
    arr1[0]=c3;
    arr1[4]=c1;
    printf("%s",arr1);
    
    }

}