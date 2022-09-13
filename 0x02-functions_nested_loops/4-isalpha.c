#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: int that be used for the argument of the function
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
