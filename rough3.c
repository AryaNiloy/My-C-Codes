#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[100000];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int police = 0, untreated_crimes = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == -1) {
            if(police > 0) {
                police--; // Assign police to crime
            } else {
                untreated_crimes++; // No police available
            }
        } else {
            police += arr[i]; // Recruit police
        }
    }
    printf("%d\n", untreated_crimes);
    return 0;
}
