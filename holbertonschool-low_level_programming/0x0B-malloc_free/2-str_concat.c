#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concanates two strings
 * @s1: pointer that contains the content of first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, m1, m2 = 0;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++, m2++)
		;
	for (i = 0; s2[i] != '\0'; i++, m2++)
		;

	m = malloc(sizeof(char) * (m2 + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];

		m1 = i;

	for (i = 0; s2[i] != '\0'; i++, m1++)
		m[m1] = s2[i];
		m[m1] = '\0';

		return (m);
}
