#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints alphabets in lower case except q and e
 *
 * Description: using the main function
 * prints all alphabets in lower case and ignoring q and e
 * Return: 0;
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
