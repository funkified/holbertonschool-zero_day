#include "holberton.h"
#include <stdlib.h>
/**
 * main - prints the of arguments passed into it
 * @argc: int
 * @argv: char argument
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
