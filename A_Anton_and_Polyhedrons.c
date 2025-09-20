#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    int sum=0;
    char arr[20];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%s", arr);
        if (strcmp(arr,"Icosahedron")==0)
        {sum=sum+20;}
        if (strcmp(arr,"Cube")==0)
        {sum=sum+6;}
        if (strcmp(arr,"Tetrahedron")==0)
        {sum=sum+4;}
        if (strcmp(arr,"Dodecahedron")==0)
        {sum=sum+12;}
        if (strcmp(arr,"Octahedron")==0)
        {sum=sum+8;}

    }
    printf("%d",sum);



}
