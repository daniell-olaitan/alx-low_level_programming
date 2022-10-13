#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int _putchar(char);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);

/**
 * struct fmt - format specifier
 * @spec: specifier
 * @func: pointer to the format function
 *
 */
typedef struct fmt
{
	char spec;
	void (*func)(char *, va_list);
} fmt_spec;

#endif
