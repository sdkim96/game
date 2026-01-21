#ifndef CORE_COMPONENT_H
#define CORE_COMPONENT_H

/* Component Enum 

The following component enums represent the possible components 
that dispatcher can forward the commands to.

- COMPONENT_WORLD
- COMPONENT_MENU
- COMPONENT_INTERACT
- COMPONENT_INVALID

COMPONENT_WORLD: The command is intended for the world component.
COMPONENT_MENU: The command is intended for the menu component.
COMPONENT_INTERACT: The command is intended for the interact component.
COMPONENT_INVALID: The command is invalid and the current loop ends without any action.
That is, no rendering or state change occurs.

*/
typedef enum Component {
    COMPONENT_WORLD,
    COMPONENT_MENU,
    COMPONENT_INTERACT,
    COMPONENT_INVALID
} Component;


#endif /* CORE_COMPONENT_H */
