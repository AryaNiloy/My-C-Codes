#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = 0; i < 5; ++i) {
        printf("-");
    }
    printf("\n");
    for (int i = 0; i < 5; ++i) {
        printf("-");
    }
    printf("\n");
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
