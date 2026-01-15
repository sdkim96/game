#ifndef ENTITY_VIEW_H
#define ENTITY_VIEW_H

#define DEFAULT_NAME "Player1"

typedef enum {
    ENTITY_PLAYER,
    ENTITY_ENEMY,
    ENTITY_DOOR
} EntityType;

typedef struct EntityView {
    EntityType type;
    int x_pos;
    int y_pos;
} EntityView;

#endif /* ENTITY_VIEW_H */ 
