#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main()
{
	int i, j = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		j += i;
	}
	_putchar("%d\n", j);
	return (0);
}
