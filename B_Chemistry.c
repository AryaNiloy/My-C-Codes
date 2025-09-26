#include<stdio.h> 
int evencase(int arr[],int s,int size,int n)
{
    int oddcount=0;
    int evencount=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]%2!=0)
        {oddcount++;}
        else {evencount++;}
    }
    if(oddcount <=n)
    {return 1;}
    else {return 0;}
}
int oddcase(int arr[],int s,int size,int n)
{ 
 int oddcount=0;
 for(int i=0;i<26;i++)
 {if(arr[i]%2==1)
        {oddcount++;}}
       if(oddcount<=n+1)
    {return 1;}
    else {return 0;} 
}
int main()
{
    int t;
    scanf("%d",&t);
    
    while (t--)
    { int s,n;
        scanf("%d %d",&s,&n);
    char str[1000005];
    scanf("%s",str);
    int size=s-n;
    if(s==1|| size==1)
    {
        printf("YES\n");
        continue;
    }
    int frequency[26];
    for(int i=0;i<26;i++ )
    {
        frequency[i]=0;
    }
    for(int i=0;i<s;i++)
    { int alpha=str[i]-'a';
      frequency[alpha]++; }

if(size%2==0)
{
int p=evencase(frequency,s,size,n);
if(p)
{printf("YES\n");}
else {printf("NO\n");}
}
else 

{int p=oddcase(frequency,s,size,n);
if(p)
{printf("YES\n");}
else {printf("NO\n");}

}
}
}