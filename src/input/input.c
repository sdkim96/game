#include "input.h"

InputToken get_token(FILE* input)
{
    int ch = fgetc(input);
    if (ch == EOF)
    {
        return TOKEN_INVALID;
    }

    char input_char = (char)ch;

    switch (input_char)
    {
        case INPUT_W:
            return TOKEN_W;
        case INPUT_A:
            return TOKEN_A;
        case INPUT_S:
            return TOKEN_S;
        case INPUT_D:
            return TOKEN_D;
        case INPUT_Q:
            return TOKEN_Q;
        case INPUT_M:
            return TOKEN_M;
        default:
            return TOKEN_INVALID;
    }
}
