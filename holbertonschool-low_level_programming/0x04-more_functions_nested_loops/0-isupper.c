#include "holberton.h"

/**
 * _isupper - checks for uppercase chararcters
 *
 * @c: char to be tested
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
