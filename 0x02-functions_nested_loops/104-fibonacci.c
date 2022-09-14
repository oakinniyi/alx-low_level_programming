#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int c, x, y;
	long int a1, a2, fn, fa2, a11, a22;

	a1 = 1;
	a2 = 2;
	x =  y = 1;
	printf("%ld, %ld", a1, a2);
	for (c = 0; c < 96; c++)
	{
		if (x)
		{
			fn = a1 + a2;
			printf(", %ld", fn);
			a1 = a2;
			a2 = fn;
		}
		else
		{
			if (y)
			{
				a11 = a1 % 1000000000;
				a22 = a2 % 1000000000;
				a1 = a1 / 1000000000;
				a2 = a2 / 1000000000;
				y = 0;
			}
			fa2 = (a11 + a22);
			fn = a1 + a2 + (fa2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fa2 % 1000000000);
			a1 = a2;
			a11 = a22;
			a2 = fn;
			a22 = (fa2 % 1000000000);
		}
		if (((a1 + a2) < 0) && x == 1)
			x = 0;
	}
	printf("\n");
	return (0);
}
