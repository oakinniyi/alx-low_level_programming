#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is the number of lines
 * Return: 0
 */

void print_triangle(int size)
{
	int a, j;

	for (a = 0; a < size; a++)
	{
		for (j = 1; j < (size - a); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (a < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
