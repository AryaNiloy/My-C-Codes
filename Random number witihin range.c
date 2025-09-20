#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("🎲 Welcome to Snakes & Ladders Game! 🎲\n");
    printf("Enter number of players (2 to 4): ");
    scanf("%d", &n);

    if (n < 2 || n > 4) {
        printf("❌ Invalid number of players. Please enter between 2 and 4.\n");
        return 1;
    }

    int positions[n];
    for (int i = 0; i < n; i++) positions[i] = 0;

    srand(time(0));

    int winner = -1;
    char temp[10];

    printf("\n🟢 Game Start! First to reach position 50 wins!\n");
    printf("🐍 Snakes: 10->1, 17->9, 48->20\n");
    printf("🪜 Ladders: 2->23, 8->12, 29->42, 39->47\n");

    while (winner == -1) {
        for (int i = 0; i < n; i++) {
            printf("\n-------------------------------------\n");
            printf("🎲 Player %d's turn. Press Enter to roll the dice...", i + 1);
            fgets(temp, sizeof(temp), stdin); // flush leftover
            fgets(temp, sizeof(temp), stdin); // wait for enter

            int dice = rand() % 6 + 1;
            printf("🎯 Player %d rolled a 🎲 %d\n", i + 1, dice);

            positions[i] += dice;

            // Ladders
            if (positions[i] == 2) {
                printf("🪜 Player %d climbed a ladder from 2 to 23!\n", i + 1);
                positions[i] = 23;
            } else if (positions[i] == 8) {
                printf("🪜 Player %d climbed a ladder from 8 to 12!\n", i + 1);
                positions[i] = 12;
            } else if (positions[i] == 29) {
                printf("🪜 Player %d climbed a ladder from 29 to 42!\n", i + 1);
                positions[i] = 42;
            } else if (positions[i] == 39) {
                printf("🪜 Player %d climbed a ladder from 39 to 47!\n", i + 1);
                positions[i] = 47;
            }

            // Snakes
            if (positions[i] == 10) {
                printf("🐍 Oh no! Snake bit Player %d from 10 to 1!\n", i + 1);
                positions[i] = 1;
            } else if (positions[i] == 17) {
                printf("🐍 Oh no! Snake bit Player %d from 17 to 9!\n", i + 1);
                positions[i] = 9;
            } else if (positions[i] == 48) {
                printf("🐍 Oh no! Snake bit Player %d from 48 to 20!\n", i + 1);
                positions[i] = 20;
            }

            printf("📍 Player %d is now at position: %d\n", i + 1, positions[i]);

            if (positions[i] >= 50) {
                winner = i;
                break;
            }
        }
    }

    printf("\n🏁🏁🏁-------------------------------------🏁🏁🏁\n");
    printf("🎉🎉 CONGRATULATIONS! Player %d wins the game! 🎉🎉\n", winner + 1);
    printf("🏆 Thanks for playing Snakes & Ladders 🐍🪜\n");

    return 0;
}
