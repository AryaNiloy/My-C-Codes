#include <stdio.h>

int main() {
    char str[101];
    scanf("%s", str);

    int i = 0;
    int f = 0;

    while(str[i] != '\0') {
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
            f = 1;
            break;
        }
        i++; 
    }

    if(f == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
