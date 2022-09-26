#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: is the source adress
 * @to: is the target adress
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
