#include "func_def.h"

#define MAX_SPEC 4

/**
 * print_all - prints anything
 * @format: list of types of argument passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	fmt_spec specs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
	};
	unsigned int i = 0, j;
	char *sep = "";

	va_start(arg_list, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < MAX_SPEC)
		{
			if (specs[j].spec == *(format + i))
			{
				specs[j].func(sep, arg_list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(arg_list);
	printf("\n");
}
