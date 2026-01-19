#ifndef INPUT_INPUT_H
#define INPUT_INPUT_H

#include <stdio.h>

/*
## Input Module

The responsibility of this module is to forward the user inputs to the game engine in a standardized format.
Following are the key entries representing the possible inputs:
- w
- a
- s
- d
- q
- m

Other characters are considered invalid inputs for now.

The preceding inputs are translated into the symolic constants defined below for the engine to process them correctly.
- TOKEN_W
- TOKEN_A
- TOKEN_S
- TOKEN_D
- TOKEN_Q
- TOKEN_M
- TOKEN_INVALID

*/
#define INPUT_W 'w'
#define INPUT_A 'a'
#define INPUT_S 's'
#define INPUT_D 'd'
#define INPUT_Q 'q'
#define INPUT_M 'm'

typedef enum InputToken {
    TOKEN_W,
    TOKEN_A,
    TOKEN_S,
    TOKEN_D,
    TOKEN_Q,
    TOKEN_M,
    TOKEN_INVALID
} InputToken;

/* Reads a single character from the input stream.
Note that if the input character is not one of the **valid inputs** defined at preceding statements,
it returns INPUT_INVALID, which is '\0'.

Parameters:
- input(FILE* ): The input stream to read from.

Returns:
- InputToken: The token read from the input stream. If invalid, returns TOKEN_INVALID.
*/
InputToken get_token(FILE* input);

#endif /* INPUT_INPUT_H */
