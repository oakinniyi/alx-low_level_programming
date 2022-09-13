#include "main.h"

/**
 * islower - checks for lowercase character
 *
 * Return: Always 0
 */
int main(void)
{
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
}
