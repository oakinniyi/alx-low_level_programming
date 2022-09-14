#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int to used in the argument of the function
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else if (prod <= 99)
				{
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else
				{
					_putchar(((prod / 100) % 10) + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
