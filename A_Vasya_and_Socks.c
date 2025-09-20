#include <stdio.h>

int socks(int m, int initial, int mod, int bought, int total)
{
    bought = initial / m;
    mod = initial % m;
    total = total + (initial - mod);
    initial = bought + mod;

    if (initial >= m) {
        return socks(m, initial, mod, bought, total);
    } else {
        return total + initial; 
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int initial = n;
    int bought = 0;
    int mod = 0;
    int total = 0;

    if (m > n) {
        printf("%d\n", n);
        return 0;          
    } else {
        int p = socks(m, initial, mod, bought, total);
        printf("%d\n", p);
        return 0;          
    }
}
