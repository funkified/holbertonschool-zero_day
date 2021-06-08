#include "holberton.h"

/**
 * _strcpy - function to cpy string
 * @dest: destination
 * @src: string to cpy
 * Return: dest 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char scp;

	for (i = 0; src[i] != '\0'; i++)
	{
		scp = src[i];
		dest[i] = scp;
	}
	dest[i] = ('\0');
	return (dest);
}
