#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    char input[100000] ;
    scanf("%s",input);
    int len=strlen(input);
    getchar();
    int arr[100000];
    

for (int i = 0; input[i] != '\0'; i++) {
    arr[i] = input[i] - '0';

}
int sum=0;
for(int i=0;i<len;i++)
{if(arr[i]==1)
{sum=sum+a;}
if(arr[i]==2)
{sum=sum+b;}
if(arr[i]==3)
{sum=sum+c;}
if(arr[i]==4)
{sum=sum+d;}
}
printf("%d",sum);
}