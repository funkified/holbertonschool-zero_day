#include "holberton.h"

/**
 * reverse_array - array in reverse
 *@a: array to be reversed
 *@n: size
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int len = 0;
	int tmp = 0;

	for (i = 0; i != n; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		tmp = a[i];
		a[i] = a[(len - 1)];
		a[(len - 1)] = tmp;
		len--;
	}
}
