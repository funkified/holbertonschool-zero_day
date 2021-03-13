#include "holberton.h"
#include <stdarg.h>

/**
 * _printf - function that produces output to according format
 * @format: holds the format of the output
 * Return: the nymber of characters printed , exluding NULL byte used to end output
 */

int _printf(const char *format, ...)
{
	const char *traverse;
	unsigned int i;
	int count = 0;
	char *s;
	va_list arg;
	
	va_start(arg, format);

/*	for (traverse = format; *traverse == '%'; traverse++)*/
		while(*traverse)
		{
			if(*traverse != '\0')
			{
				traverse++;
				switch(*traverse)
				{
					case 'c' : i = va_arg(arg, int);
							   putchar(i);
							   format++;
							   count ++;
							   break;
					case 's' : s = va_arg(arg, char *);
							   puts(s);
							   format++;
							   count += strlen(s);
							   break;
					case '%' :
							   _putchar('%');
							   format++;
							   traverse++;
							   break;
				}
			
		va_end(arg);
			}
		}
	return (i);
}

/**
 * print_char - prints one char
 * @arg: argumetns
 * Return: 1 if success
 */

int print_char(va_list arg)
{
	char idx;
	for (idx = 'A'; idx <= 'Z'; idx++)
	{
		return(_putchar(va_arg(arg, int)));
	}
	return (idx);
}

int main(void)
{
	printf("%s it worked\n", _printf);
	return(0);
}
