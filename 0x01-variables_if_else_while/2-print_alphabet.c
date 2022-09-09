#include <stdio.h>

/**
 * main - prints alphabets in lower case
 *
 * Description: using the main function
 * prints alphabets in lower case, followed be a new line
 * Return: 0;
 */
int main(void)
{
	char alp[26] = "a..z";
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n);
	return (0);
}
