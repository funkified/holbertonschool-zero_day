#include "function_pointers.h"

/**
 * print_name - function pointer print_name_as_is
 * @name: name of the person
 * @f: pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != '\0')
		f(name);

}
