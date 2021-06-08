#include "holberton.h"
/**
 *_strncat - function to concanate two string
 *@dest: 1st string
 *@src: 2nd string
 *@n: size
 *Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
		len2++;
	}
		for (len1 = 0; src[len1] && len1 < n; len1++)
		dest[len2++] = src[len1];

	return (dest);
}
