#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int cnt1 = 0, cnt2 = 0, x;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x == 1)
                cnt1++;
            else
                cnt2++;
        }
        
        int total = cnt1 + 2 * cnt2;
        
        if (total % 2 != 0) {
            printf("NO\n");
        } else {
            int half = total / 2;
            if (cnt1 == 0 && half % 2 != 0)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
    
    return 0;
}
