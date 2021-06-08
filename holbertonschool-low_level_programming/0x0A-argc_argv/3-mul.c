#include "holberton.h"

/**
 * main - mutiplies 2 number
 * @argc: count
 * @argv: vector
 * Return: results
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
