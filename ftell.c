#include<Stdio.h>
#include<stdlib.h>
int main()
{
    FILE *in;
    char *input="image1.jpg";
    in=fopen(input,"rb");
    fseek(in,0,SEEK_END);
    printf("File size %ld bytes\n",ftell(in));
    printf("File size (kilobyte): %ld\n",ftell(in)/1024);
    fclose(in);
    return 0;
}
