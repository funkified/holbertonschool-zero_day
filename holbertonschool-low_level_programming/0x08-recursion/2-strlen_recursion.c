#include "holberton.h"
/**
 * _strlen_recursion - function that returns a lenght of a string
 * @s: pointer
 * Return: length of string recursively
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
