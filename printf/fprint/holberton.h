#ifndef __HOLBERTON_H__
#define __HOLBERTON_H__
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <sys/param.h>
#include <ctype.h>
#include <limits.h>
#include <stdint.h>

/* PrintF function */
int _printf(const char *format, ...);
/*Prototypes */
void fprint(FILE *out, va_list arg);
int _putchar(char c);

#endif
