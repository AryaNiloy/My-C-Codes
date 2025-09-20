#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello world";
    char str2[] = " ";

    // Find the position of the first space in str1
    int index = strcspn(str1, str2);

    printf("The first space is at index: %d\n", index+1);
    return 0;
}

