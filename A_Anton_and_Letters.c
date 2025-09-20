#include <stdio.h>
#include <string.h>

int main() {
    char input[1100];
    char alpha[26]; 
    int count = 0;

    
    for (int i = 0; i < 26; i++) {
        alpha[i] = 'a' + i;
    }

    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 

    int len = strlen(input);

    for (int i = 0; i < len; i++) {
    
        if (input[i] >= 'a' && input[i] <= 'z') {
            
            for (int j = 0; j < 26; j++) {
                if (input[i] == alpha[j]) {
                    count++;
                    alpha[j] = '\0'; 
                    break;
                }
            }
        }
    }

    printf("%d\n", count); 
    return 0;
}