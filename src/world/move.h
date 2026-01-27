#ifndef WORLD_MOVE_H
#define WORLD_MOVE_H

#include "core/world.h"
#include "core/move.h"
#include "core/interaction.h"

/* Checks if the player entity can move in the specified direction.

Parameters:
- world(World* ): The current world state.
- move(Move ): The direction to move.

Returns:
- 0: Cannot move
- 1: Can move
*/
int can_go(World* world, Move move);


/* Checks if the actor entity can interact in the specified direction.

Parameters:
- world(World* ): The current world state.
- actor(Entity* ): The entity attempting to interact.
- move(Move ): The direction to interact.

Returns:
- 0: Cannot interact
- 1: Can interact
*/
int can_entity_interact(World* world, Entity* actor, Move move);

#endif /* WORLD_MOVE_H */
