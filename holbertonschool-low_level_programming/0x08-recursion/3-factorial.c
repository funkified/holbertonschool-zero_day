#include "holberton.h"

/**
 * factorial - returns factorial number
 * @n: find factorials
 * Return: 0 else 1
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
		return (n * factorial(n - 1));
}
