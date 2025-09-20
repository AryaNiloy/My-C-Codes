#include <stdio.h>
#include <string.h>

void recombine(char str[]) {
    char temp1 = str[0];
    char temp2 = str[1];
    char temp3 = str[2];

    char perm[4];  

    // bac
    perm[0] = temp2;
    perm[1] = temp1;
    perm[2] = temp3;
    perm[3] = '\0';
    if (strcmp(perm, "abc") == 0) {
        printf("YES\n");
        return;
    }

   
    perm[0] = temp1;
    perm[1] = temp3;
    perm[2] = temp2;
    perm[3] = '\0';
    if (strcmp(perm, "abc") == 0) {
        printf("YES\n");
        return;
    }

    
    perm[0] = temp3;
    perm[1] = temp2;
    perm[2] = temp1;
    perm[3] = '\0';
    if (strcmp(perm, "abc") == 0) {
        printf("YES\n");
        return;
    }

    printf("NO\n");
}

int main() {
    int t;
    char str[4];  
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s", str);

        if (strcmp(str, "abc") == 0) {
            printf("YES\n");
        } else {
            recombine(str);
        }
    }

    return 0;
}
