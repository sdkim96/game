#ifndef CORE_GAMESTATE_H
#define CORE_GAMESTATE_H

/* Game State

GameState represents the single source of truth for the current state of the game.
It holds all the necessary information such as:
- Game Name
- Game Status
- Player Information
- World Information

A game consists of the preceding information, which are encapsulated in this structure.
*/

typedef enum Platform {
    PLATFORM_WINDOWS,
    PLATFORM_MAC,
    PLATFORM_LINUX
};

typedef enum GameStatus {
    STATUS_WORLD,
    STATUS_MENU,
    STATUS_INTERACT
};

typedef struct GameIdentity {
    char name[64];
    Platform platform;
} GameIdentity;

typedef struct GameState {
    GameIdentity* identity;
    GameStatus status;
} GameState;

#endif /* CORE_GAMESTATE_H */