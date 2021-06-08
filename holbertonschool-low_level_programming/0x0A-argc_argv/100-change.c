#include "holberton.h"

/**
 * main - print the minimum of coins to make change for an ammount of money
 * @argc: counts
 * @argv: vector
 * Return: 1 if arguments dont pass, 0 if success
 */

int main(int argc, char **argv)
{
	int cents;
	int coins = 0;
	int cv[5] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			coins += cents / cv[i];
			cents -= (cents / cv[i]) * cv[i];
		}
	}
	printf("%d\n", coins);
	return (0);
}
