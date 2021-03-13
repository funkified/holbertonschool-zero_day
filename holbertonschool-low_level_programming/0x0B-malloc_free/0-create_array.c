#include "holberton.h"

/**
 *create_array - creates an array of char
 *@size: length of string
 *@c: char
 *Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
		char *s;
		unsigned int i = 0;

		s = malloc(sizeof(char) * size);
		if (s == '\0')
		{
			return ('\0');
		}

		i = 0;
		while (i < size)
		{
			s[i] = c;
			i++;
		}
		if (size == '\0')
		{
			return (0);
		}

		s[i] = ('\0');
		return (s);
}
