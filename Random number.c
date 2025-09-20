#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Before seeding (srand):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", rand());
    }

    printf("\nAfter seeding with srand(time(0)):\n");

/*time_t t;
t = time(0);
srand(t);*/

    srand(time(0));  // Correct seeding with current time

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", rand());
    }

    return 0;
}
