#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints alphabets in lower case and in reverse
 *
 * Description: using the main function
 * prints alphabets in lower case and in reverse
 * Return: 0;
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
