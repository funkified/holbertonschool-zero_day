#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of all parameters
 *@n: constant interger
 *Return: 0 if n is equal to NULL
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);
	va_end(arguments);
	return (sum);

}
