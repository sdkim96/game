#ifndef DISPATCHER_DISPATCHER_H
#define DISPATCHER_DISPATCHER_H

#include "input/input.h"

typedef enum Command {
    COMMAND_MOVE_UP,
    COMMAND_MOVE_LEFT,
    COMMAND_MOVE_DOWN,
    COMMAND_MOVE_RIGHT,
    COMMAND_ACTION_INTERACT,
    COMMAND_SYSTEM_QUIT,
    COMMAND_INVALID
} Command;

Command publish_command(InputToken token, GameState* state);


#endif /* DISPATCHER_DISPATCHER_H */