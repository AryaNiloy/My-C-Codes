#include <stdio.h>
#include <string.h>

int main() {
    char str[201];
    scanf("%s", str);

    char sub[] = "WUB";
    int n = strlen(str);
    int m = 3;
    int space = 0;  

    for (int i = 0; i < n; ) {
        if (strncmp(&str[i], sub, m) == 0) {
            
            i += m;
        } else {
            if (space) printf(" ");
            
            
            while (i < n && strncmp(&str[i], sub, m) != 0) {
                printf("%c", str[i]);
                i++;
            }
            space = 1; 
        }
    }
}
