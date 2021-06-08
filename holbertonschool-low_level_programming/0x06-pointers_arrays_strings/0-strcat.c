#include "holberton.h"

/**
 * *_strcat - function that concanates two strings
 *@dest: pointer to first string
 *@src: pointer to second string
 *Return: concanate string
 */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; src[len2] != '\0'; len2++)
		dest[len1 + len2] = src[len2];

	dest[len1 + len2] = '\0';

	return (dest);
}
