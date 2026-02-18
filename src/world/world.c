#ifndef WORLD_WORLD_C
#define WORLD_WORLD_C

#include "world/world.h"
#include "world/collision.h"

void create_world_artifact(Command cmd, GameState* state)
{
    int collision_check = 0;

    switch (cmd)
    {
        case COMMAND_WORLD_MOVE_UP:
            int collision_check = can_go(state->world, MOVE_UP);
            break;
        case COMMAND_WORLD_MOVE_LEFT:
            int collision_check = can_go(state->world, MOVE_LEFT);
            break;
        case COMMAND_WORLD_MOVE_DOWN:
            int collision_check = can_go(state->world, MOVE_DOWN);
            break;
        case COMMAND_WORLD_MOVE_RIGHT:
            int collision_check = can_go(state->world, MOVE_RIGHT);
            break;
        default:
    }

    state->world->player;
    return;

}

#endif /* WORLD_WORLD_C */
