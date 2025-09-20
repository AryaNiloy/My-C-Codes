#include<stdio.h>


    void recurse(int count)
    {
        if(count>5)
        {return;
        }
        printf("i am learning recursion!\n");

        printf("Count=%d\n",count);
        recurse(count+1);
        printf("Count=%d\n",count);
    }
    int main ()
    {
        recurse(1);
        return 0;
    }

