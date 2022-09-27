#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to set value of.
 * @to: Char who's value is to be set to..
 */
void set_string(char **s, char *to)
{
	*s = to;
}
