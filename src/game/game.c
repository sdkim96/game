#ifndef GAME_GAME_C
#define GAME_GAME_C
#include <stdio.h>

#include "game.h"
#include "../world/world.h"
#include "../engine/engine.h"

Game* initialize_game()
{
    Game* game = (Game*)malloc(sizeof(Game));
    return game;
}

void run(Game* game)
{
    printf("Game '%s' is running...\n", game->name);
    
    int ch;
    ch = getchar();

    move(ch, )

    return;
}

void cleanup_game(Game* game)
{
    free(game);
    return;
}
#endif // GAME_GAME_C