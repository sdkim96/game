#ifndef DISPLAY_H
#define DISPLAY_H

#include "world.h"
#include "entity_view.h"

void render_display(
    const World* world, 
    const EntityView* entities,
    const int entity_count
);

#endif // DISPLAY_H
