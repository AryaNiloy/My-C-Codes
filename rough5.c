#include<stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int player[n];
    int ellist[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &player[i]);
    }

    int eligible = 0;int serial=0;

    for (int i = 0; i < n; i++) {
        if (player[i] <= 5 - k) {
            ellist[serial++]=i+1;
            eligible++;

        }
    }
 int len=serial;
    int teams = eligible / 3;
    printf("%d\n", teams);
    for(int i=0;i<len;i++)
    {
        printf("%d ",ellist[i]);
    }

    return 0;
}
