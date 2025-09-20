#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n > 0) {
        printf("%d\n", n);
        return 0;
    }

    int m = abs(n);
    int len = 0;
    int arr[100];
    int k = m;

    while (k != 0) {
        arr[len] = k % 10;  
        k = k / 10;         
        len++;
    }

    
    if (len == 2 && n % 10 == 0) {
        printf("0\n");
        return 0;
    }

    if (arr[1] > arr[0]) {
        
        m = m / 100;         
        m = m * 10 + arr[0]; 
        printf("%d\n", -m);
    } else {
        m = m / 10;  
        printf("%d\n", -m);
    }

    return 0;
}
