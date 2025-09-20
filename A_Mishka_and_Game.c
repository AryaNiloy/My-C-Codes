 #include<stdio.h>
 int main()
 {
    int t;
    scanf("%d",&t);
    int a,b,m=0,c=0;
    for(int i=0;i<t;i++)
    {scanf("%d %d",&a,&b);
    if(a>b)
    {m++;}
    if(a<b)
    {c++;}
    if(a=b)
    {m++;c++;}

    }
    if(m>c)
    {printf("Mishka");}
    if(c>m)
    {printf("Chris");}
    if(c==m)
    {printf("Friendship is magic!^^");}

 }