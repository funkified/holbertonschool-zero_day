#include "holberton.h"

/**
*_pow_recursion - raise the power of y
*@x: first int
*@y: secont int
*Return: -1 if y is lower greater than 0
*/

int _pow_recursion(int x, int y)
{
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
