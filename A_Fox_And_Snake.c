#include <stdio.h>
#include <string.h>

void match(int a[], int b[]) {
    for (int k = 0; k < 26; k++) {
        if (a[k] != b[k]) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main() {
    int alphacount[26] = {0};
    int stlcount[26] = {0};

    char nyear[105], chr[105], stolen[205];
    scanf("%s", nyear);
    scanf("%s", chr);
    scanf("%s", stolen);

    int len1 = strlen(nyear);
    int len2 = strlen(chr);
    int len3 = strlen(stolen);
    int total = len1 + len2;

    for (int i = 0; i < len1; i++) {
        alphacount[nyear[i] - 'A']++;
    }
    for (int i = 0; i < len2; i++) {
        alphacount[chr[i] - 'A']++;
    }


    for (int i = 0; i < len3; i++) {
        stlcount[stolen[i] - 'A']++;
    }

    if (len3 != total) {
        printf("NO\n");
    } else {
        match(stlcount, alphacount);
    }

    return 0;
}
