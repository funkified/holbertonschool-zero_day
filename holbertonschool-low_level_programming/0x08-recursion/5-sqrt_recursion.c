#include "holberton.h"

/**
 *find_root - find a perfect square root
 *@n: num to be evaluate
 *@rt: root
 * Return: 1
 */

int find_root(int n, int rt)
{
	if ((rt * rt) == n)
	{
		return (rt);
	}
	if (rt == n / 2)
	{
		return (1);
	}
		return (find_root(n, rt + 1));
}

/**
 *_sqrt_recursion - locate square root
 *@n: number
 *
 * Return: 1 else -1
 */

int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n == 0)
		{
		return (1);
		}
	if (n < 0)
		{
		return (-1);
		}
		return (find_root(n, rt));
}
