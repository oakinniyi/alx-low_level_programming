#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: is to input string.
 * Return: int.
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, b = 0, a = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			a *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		b = b + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (b * a);
}
