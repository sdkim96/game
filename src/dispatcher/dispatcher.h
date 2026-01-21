#ifndef DISPATCHER_DISPATCHER_H
#define DISPATCHER_DISPATCHER_H

#include "input/input.h"

#include "core/command.h"
#include "core/component.h"
#include "core/gamestate.h"

/* Publishes a command
Take a look at the definition of [Command](https://github.com/sdkim96/game/blob/main/src/core/command.h) for all possible commands.

Parameters:
- token(InputToken): The input token received from the input module.
- state(GameState*): The current game state.

Returns:
- Command: The corresponding command enum value.
*/
Command publish_command(InputToken token, GameState* state);

/* Decides the destination component for a given command.
Take a look at the definition of [Component](https://github.com/sdkim96/game/blob/main/src/core/component.h)

Parameters:
- cmd(Command): The command to decide the destination for.

Returns:
- Component: The destination component enum value.
*/
Component decide_component(Command cmd);

#endif /* DISPATCHER_DISPATCHER_H */