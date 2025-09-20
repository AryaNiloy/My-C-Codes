#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int probtime=0;
    int count =0;
    int i=1;
    int travel;
    scanf("%d",&travel);
    int allocated=240;
    int rem=allocated-travel;
    while(probtime<=rem && i<=n)
    {   
        probtime=probtime+(5*i);
        if(probtime>rem)
        {
            break;
        }
        count++;
        i++;
        


    }
    //printf("%d\n",rem);
    //printf("%d\n",probtime);
    printf("%d\n",count);


}
