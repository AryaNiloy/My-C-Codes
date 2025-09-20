#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);

        int flag = 0;

        while(n >= 0) {
            if(n % 2020 == 0) { 
                flag = 1;
                break;
            }
            n -= 2021; 
        }

        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
