#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        char  arr[2001];
        int   att[2001];

        scanf("%s", arr);          /* read the bit‑string */

        /* copy characters as 0/1 integers */
        for (int i = 0; arr[i] != '\0'; i++)
            att[i] = arr[i] - '0'; /* convert char '0'/'1' to int 0/1 */

       
              int j = 0, k = n - 1;
        while (j < k && att[j] != att[k]) {
            j++;
            k--;
        }

        if (j > k)
            printf("0\n");
        else
            printf("%d\n", k - j + 1);

            
        
        
    }
    return 0;
}
