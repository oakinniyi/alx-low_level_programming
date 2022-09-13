#include "main.h"

/**
 *print_alphabets - this fubction prints alphabets
 *
 * Description: the funtion above prints all alphabets in lower case
 * Return: 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
