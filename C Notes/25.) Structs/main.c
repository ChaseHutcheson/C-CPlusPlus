#include <stdio.h>
#include <string.h>

struct Player
{
    char name[25];
    int score;
};

int main()
{
    // Structs are just a collection of variables. Their basically classes, but you cannot have methods

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Chase");
    player1.score = 4;

    strcpy(player2.name, "Blake");
    player2.score = 5;

    printf("Player 1:\nName = %s | Score = %d", player1.name, player1.score);
    printf("\n\nPlayer 2:\nName = %s | Score = %d", player2.name, player2.score);

    return 0;
}
