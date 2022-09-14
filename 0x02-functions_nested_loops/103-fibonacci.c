#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of even-valued terms
 * Return: 0
 */
int main(void)
{
	long int a1, a2, fa, b;

	a1 = 1;
	a2 = 2;
	fa = b = 0;
	while (fa <= 4000000)
	{
		fa = a1 + a2;
		a1 = a2;
		a2 = fa;
		if ((a1 % 2) == 0)
		{
			b += a1;
		}
	}
	printf("%ld\n", b);
	return (0);
}
