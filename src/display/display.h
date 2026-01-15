#ifndef DISPLAY_DISPLAY_H
#define DISPLAY_DISPLAY_H

#include "world/world.h"
#include "entity/entity_view.h"
#include "display/view.h"
#include "display/console.h"

void render_display(
    const World* world, 
    const EntityView* entities,
    const int entity_count
);

#endif /* DISPLAY_DISPLAY_H */
