#include<stdio.h>

int odd(int num) {
    return num % 2 != 0;
}

int even(int num) {
    return num % 2 == 0;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[50], oddcount = 0, evencount = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (odd(arr[i])) oddcount++;
            else evencount++;
        }

        if (n == 2) {
            if ((odd(arr[0]) && odd(arr[1])) || (even(arr[0]) && even(arr[1]))) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else if(even(n)){
            if (even(oddcount)&&even(evencount)) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
        else if(odd(n)){
            if(odd(oddcount))
            {printf("NO\n");}
            else{printf("YES\n");}
        }
    }

    return 0;
}
