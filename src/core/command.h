#ifndef CORE_COMMAND_H
#define CORE_COMMAND_H

/*
Command Enum

Command represents a semantic action which is a combination of:
- User Input
- Current Game State

That is, a Command encapsulates what each component has to do 
when a specific input is received in a specific game state.

For example, If current game state is STATUS_WORLD and user input is 'w',
the corresponding command would be COMMAND_MOVE_UP, which means the player entity
has to move up in the world.

However, if the current game state is STATUS_MENU and user input is 'w',
the corresponding command might be COMMAND_INVALID, since moving up in the menu
might not be allowed in this game design.

Therefore, all the possible commands are defined what game engine can process.
If you want additional actions, you can add more commands here.
*/
typedef enum Command {
    /* Command about movement; world */
    COMMAND_WORLD_MOVE_UP,
    COMMAND_WORLD_MOVE_LEFT,
    COMMAND_WORLD_MOVE_DOWN,
    COMMAND_WORLD_MOVE_RIGHT,

    /* Command about changes the status of the game; */
    COMMAND_WORLD_OPEN_INTERACT,
    COMMAND_WORLD_OPEN_MENU,
    COMMAND_MENU_CLOSE_TO_WORLD,
    COMMAND_INTERACT_CLOSE_TO_WORLD,
    
    /* Command about menu; */
    COMMAND_MENU_SYSTEM_QUIT,

    /* Command about interact */
    COMMAND_INTERACT_ATTACK,

    /* Command about undefined or invalid commands */
    COMMAND_INVALID
} Command;  


#endif /* CORE_COMMAND_H */
