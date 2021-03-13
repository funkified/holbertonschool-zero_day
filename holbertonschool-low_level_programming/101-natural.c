#include <stdio.h>
/**
 * main - computes and prints the sum of all multiples of 3 and 5 bellow 1024
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int sum = 0;
	int limit = 1024;

	for (i = 0; i < limit; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%i\n", sum);

	return (0);

}
