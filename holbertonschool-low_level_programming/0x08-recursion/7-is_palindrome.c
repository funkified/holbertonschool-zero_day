#include "holberton.h"

int palindrome_check_a(char *s);
int palindrome_check_b(char *s);
/**
 *palindrome_check_a - outside function
 *@idx: checker
 *@s: pointer
 *Return: success
 */

int palindrome_check_a(char *s)
{
	idx = 0;

	if (*s != 0)
	{
		idx++;
		return (idx + palindrome_check_a(s + 1));
	}
	return (idx);
}

/**
 *palindrome_check_b - outside function
 *`
 *@s: pointer
 *Return: results
 */
int palindrome_check_b(char *s)
{
	idx = 0;

	if (idx <= 1)
		return (1);
	if (*s != s[idx - 1])
		return (0);
	else
		return (palindrome_check_b((s + 1), (idx - 2)));
}

/**
 * is_palindrome - check if is palindrome
 *
 * @s: pointer
 * Return: 1 else 0
 */

int is_palindrome(char *s)
{
	int idx = palindrome_check_a(s);

	if (idx <= 1)
		return (1);
	return (palindrome_check_b(s, idx));
}
