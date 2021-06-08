#include "holberton.h"
/**
 *print_number - prints the numbers from 0 to 9
 *@n: count
 *Return: 0
 */
void print_number(int n)
{
	for (n = 0; n < 10; n++)
		_putchar(n + '0');
	_putchar('\n');
}
