#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10, i++)
	{
		for (j = 0; j < 15; j++)
		{
			for (j >= 10)
				putchar((j / 10) + 48);
			putchar((j % 10) + 48);
		}
		putchar('\n');
	}
}
