#include "holberton.h"

/**
 *main - add positive number
 *@argc: count arguments:
 *@argv: vector
 *
 *Return: 0 if success, else 1
 */

int main(int argc, char *argv[])
{
	int res = 0;
	int add_a, add_b, is_int;
	char *str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (add_a = 1; add_a < argc; add_a++)
	{
		str = argv[add_a];

		for (add_b = 0; str[add_b] != '\0'; add_b++)
		{
			is_int = isdigit(str[add_b]);

			if (is_int == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(str);
	}
	printf("%d\n", res);
	return (0);
}
