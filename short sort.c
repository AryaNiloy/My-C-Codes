#include <stdio.h>
#include <string.h>
int main() {
    int t;
    char str[4];
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s", str);

        if (strcmp(str, "abc") == 0) {
            printf("YES\n");
        } else if(strcmp(str, "acb") == 0) {
            printf("YES\n");}
             else if(strcmp(str, "bac") == 0) {
            printf("YES\n");}
             else if(strcmp(str, "cba") == 0) {
            printf("YES\n"); }
            else {printf("NO\n");}

    }

    return 0;
}
