#ifndef GAME_GAME_C
#define GAME_GAME_C
#include <stdio.h>
#include <stdlib.h>

#include "game.h"
#include "../input/input.h"
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
    FILE* input = stdin;
    Command cmd = translate_to_command(get_input_char(input));
    

    

    return;
}

void cleanup_game(Game* game)
{
    free(game);
    return;
}
#endif // GAME_GAME_C