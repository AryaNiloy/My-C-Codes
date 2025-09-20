#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char arr[9];      
        char string[9];  
        int c = 0;

        for (int i = 0; i < 8; i++) {
            scanf("%s", arr);
            for (int j = 0; j < 8; j++) {
                if (arr[j] != '.') {
                    string[c] = arr[j];
                    c++;
                }
            }
        }
        string[c] = '\0';
        printf("%s\n", string);
    }
    return 0;
}
