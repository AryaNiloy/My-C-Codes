#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    scanf("%s", arr);

    int cs = 0, cc = 0;
    int len = strlen(arr);

    // Count lowercase and uppercase letters
    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            cs++;
        } else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            cc++;
        }
    }

    // Convert case based on the counts
    for (int i = 0; i < len; i++) {
        if (cs >= cc) {
            // Convert to lowercase
            if (arr[i] >= 'A' && arr[i] <= 'Z') {
                arr[i] += 32; // ASCII conversion
            }
        } else {
            // Convert to uppercase
            if (arr[i] >= 'a' && arr[i] <= 'z') {
                arr[i] -= 32; // ASCII conversion
            }
        }
    }

    printf("%s\n", arr);

    return 0;
}

