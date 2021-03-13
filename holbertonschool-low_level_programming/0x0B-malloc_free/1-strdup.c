#include "holberton.h"

/**
 * _strdup - function that duplicates a string
 *
 * @str: pointer to string
 * Return: 0 if success
 */
char *_strdup(char *str)
{
	int len;
	char *s;

	if (str == NULL)
		return ('\0');
	for (len = 0; str[len] != '\0'; len++)
		;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return ('\0');

	while (len >= 0)
	{
		s[len] = str[len];
		len--;
	}

	return (s);
}
