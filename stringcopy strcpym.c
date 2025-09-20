#include <stdio.h>
#include <string.h>
int main() {
    char oldstr[] = "Tiger"; // Define old str as an array
    char newstr[5]; // Define newstr as an array to hold the copied content
    strcpy(newstr, oldstr);
    puts(newstr);
    return 0;
}
