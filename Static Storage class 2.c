int f(int n)
{
    static int i=1;
    if(n>=5)
        {return n;}
    else
    {n=n+i;
    i++;
    return f(n);}
}
int main()
{    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    f(n);
}
