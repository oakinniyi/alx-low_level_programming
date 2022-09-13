#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is the int that will be used for the argument
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
