#include <stdio.h>

/**
 * main - prints alphabets in lower case and then upper case
 *
 * Description: using the main function
 * prints alphabets in lower case and upper case, followed be a new line
 * Return: 0;
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
