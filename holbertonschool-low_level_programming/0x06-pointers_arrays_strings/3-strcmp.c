#include "holberton.h"
/**
 *_strcmp - compares two string
 *@s1: string 1
 *@s2: string 2
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int len = 0;

	for (len = 0; s1[len] == s2[len]; len++)
		if (s1[len] == '\0')
			return (0);

		return (s1[len] - s2[len]);

}
