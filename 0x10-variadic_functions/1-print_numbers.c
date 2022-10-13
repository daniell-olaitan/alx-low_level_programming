#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of args
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;

	va_start(arg_list, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(arg_list, int));
		if (separator && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
}
