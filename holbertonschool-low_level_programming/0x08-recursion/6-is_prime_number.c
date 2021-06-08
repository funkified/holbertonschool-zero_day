#include "holberton.h"

int check_prime(int x, int y);

/**
 * is_prime_number - calculates if a number is prime
 * @n: checks number
 * Return: 1 if the input interger is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (check_prime(n, 2));
	else
		return (0);
}

/**
 * check_prime - checks if number is prime
 * @x: first
 * @y: second
 * Return: result
 */
int check_prime(int x, int y)
{
	if (x % y == 0 && y != (x / 2))
		return (0);
	if (y >= (x / 2))
		return (1);
	return (check_prime(x, y + 1));
}
