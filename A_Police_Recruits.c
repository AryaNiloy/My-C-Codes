#include<stdio.h>
int main() {
    int sum = 0;
    int arr[100000];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int actpolice[100000] = {0};
    int crime = 0;
    int police = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == -1) {
            if(police > 0) {
                actpolice[i] = 1;
                police--;
            } else {
                crime++;
            }
        } else {
            police += arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        sum += actpolice[i];
    }
    printf("%d", crime);  
    return 0;
}
