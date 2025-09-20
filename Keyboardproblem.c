#include<stdio.h>
#include<string.h>

 int main()
 {
 char arr1[15] = " qwertyuiop[";
    char arr2[15] = "asdfghjkl;";
    char arr3[15] = "zxcvbnm,";
    char dir;
    scanf(" %c", &dir); 
    char string[101];
    scanf("%s", string);

    for(int i=0;i<strlen;i++)
    {
        char c=string[i];
        char pos*;
        int index;
        if(strchr(arr1,c))
        {
            pos=strchr(arr1,c);
            index=pos-arr1;
            if(dir=="R")
            {string[i]=arr1[index-1];}
             else
                string[i] = arr1[index + 1]; 
            printf("%c", string[i]);
        }
        else if(strchr(arr2,c))
        {
            pos=strchr(arr2,c);
            index=pos-arr2;
            if(dir=="R")
            {string[i]=arr2[index-1];}
             else
                string[i] = arr2[index + 1]; 
            printf("%c", string[i]);
        }
        else if(strchr(arr3,c))
        {
            pos=strchr(arr3,c);
            index=pos-arr3;
            if(dir=="R")
            {string[i]=arr2[index-1];}
             else
                string[i] = arr3[index + 1]; 
            printf("%c", string[i]);
        }



    }

 }


#include <stdio.h>
#include <string.h>

int main() {
    char arr1[15] = " qwertyuiop[";
    char arr2[15] = "asdfghjkl;";
    char arr3[15] = "zxcvbnm,";
    char dir;
    scanf(" %c", &dir);   

    char string[101];
    scanf("%s", string);

    for (int i = 0; i < strlen(string); i++) {
        char c = string[i];
        char *pos;
        int index;

        
        pos = strchr(arr1, c);
        if (pos) {
            index = pos - arr1;
            if (dir == 'R')
                string[i] = arr1[index - 1]; 
            else
                string[i] = arr1[index + 1]; 
            printf("%c", string[i]);
            continue;
        }

        
        pos = strchr(arr2, c);
        if (pos) {
            index = pos - arr2;
            if (dir == 'R')
                string[i] = arr2[index - 1];
            else
                string[i] = arr2[index + 1];
            printf("%c", string[i]);
            continue;
        }

      
        pos = strchr(arr3, c);
        if (pos) {
            index = pos - arr3;
            if (dir == 'R')
                string[i] = arr3[index - 1];
            else
                string[i] = arr3[index + 1];
            printf("%c", string[i]);
            continue;
        }
    }

    return 0;
}
