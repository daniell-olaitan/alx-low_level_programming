#ifndef FUNC_DEF_H
#define FUNC_DEF_H

#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @sep: separator
 * @c: char to print
 *
 */
void print_char(char *sep, va_list c)
{
	printf("%s%c", sep, va_arg(c, int));
}

/**
 * print_int - prints an int
 * @sep: separator
 * @num: int to print
 *
 */
void print_int(char *sep, va_list num)
{
	printf("%s%d", sep, va_arg(num, int));
}

/**
 * print_float - prints a float
 * @sep: seprator
 * @f: the float to print
 *
 */
void print_float(char *sep, va_list f)
{
	printf("%s%f", sep, va_arg(f, float));
}

/**
 * print_str - prints a string
 * @sep: separator
 * @str: the string to print
 *
 */
void print_str(char *sep, va_list str)
{
	char *s = va_arg(str, char *);

	if (s != NULL)
	{
		printf("%s%s", sep, s);
		return;
	}

	printf("%s(nil)", sep);
}

#endif
