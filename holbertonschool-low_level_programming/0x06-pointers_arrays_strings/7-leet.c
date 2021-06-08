#include "holberton.h"
/**
 * leet - encodes a string to 1337
 *@s: pointer
 * Return: pointer to enconded string
 */
char *leet(char *s)
{
	int i;
	int j;
	char st[] = "aAeEoOtTlL";
	char nm[] = "43071";

	i = 0;
	for (i = 0; st[i] != '\0'; i++)
	{
		for (j = 0; st[j] != '\0'; j++)
			if (s[i] == st[j])
				s[i] = nm[j / 2];
	}
	return (s);
}
