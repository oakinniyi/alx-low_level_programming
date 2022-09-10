#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Description: using the main function
 * this program prints 0 to 9 with commas inbetween them
 * Return: 0;
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
