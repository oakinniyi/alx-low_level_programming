#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @n: postive integer
 * @y: power of n
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	int i = 0, a;
	
	if (y < 0)
	{
	    return (-1);
    }
    else if (y == 0)
    {
        return (1);
    }
    else
    {
        return (x * _pow_recursion(x, y - 1));
    }
}
