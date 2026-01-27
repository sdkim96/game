#ifndef ENTITY_VIEW_H
#define ENTITY_VIEW_H

typedef enum {
    ENTITY_PLAYER,
    ENTITY_ENEMY,
    ENTITY_DOOR
} EntityType;

typedef struct Entity {
    EntityType type;
    int x_pos;
    int y_pos;
} Entity;

#endif /* ENTITY_VIEW_H */ 
