#ifndef CORE_WORLD_H
#define CORE_WORLD_H

#include "core/map.h"
#include "core/entity.h"

typedef struct World {
    Map* map;
    Entity* player;
    Entity* entities;
    int entity_count;
} World;



#endif /* CORE_WORLD_H */