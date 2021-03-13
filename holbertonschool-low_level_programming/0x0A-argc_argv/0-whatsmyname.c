#include "holberton.h"

/**
 * main - prints name of file
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	printf("%s\n", *argv++);
	return (0);
}
