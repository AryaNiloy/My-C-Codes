#include<stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int player[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &player[i]);
    }

    int eligible = 0;

    for (int i = 0; i < n; i++) {
        if (player[i] <= 5 - k) {
            eligible++; 
        }
    }

    int teams = eligible / 3; 
    printf("%d\n", teams);

    return 0;
}