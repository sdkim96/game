#include <stdio.h>

#include "game/game.h"

int main(void)
{
    Game* game = initialize_game();
    if (game == NULL)
    {
        fprintf(stderr, "Failed to initialize game.\n");
        return 1;
    }

    run(game);
    cleanup_game(game);
    return 0;
}