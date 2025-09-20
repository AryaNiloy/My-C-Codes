#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char arr[5];      
        int pos[500];     
        int c = n - 1;    

        for (int i = 0; i < n; i++) {
            scanf("%s", arr);
            for (int j = 0; arr[j] != '\0'; j++) {
                if (arr[j] == '#') {
                    pos[c] = j + 1;  
                    c--;             
                    break;            
                }
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", pos[i]);
        }
        printf("\n");
    }

    return 0;
}
