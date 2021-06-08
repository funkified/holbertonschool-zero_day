#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers -function that prints numbers
 * @separator: pointer to string to be printed
 * @n: the number of ints passed to funcitno
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
		separator = "";

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));
		if (i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
}
