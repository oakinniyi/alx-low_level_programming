#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: value of integer
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar('\');
		while (n < 9)
		{
			_putchar(' ');
			n++;
		}
	}
	_putchar('\n');
}
