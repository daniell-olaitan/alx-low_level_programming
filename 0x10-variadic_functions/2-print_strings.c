#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;
	char *str;

	va_start(arg_list, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(arg_list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i != (n - 1))
			printf("%s", separator);
	}

	va_end(arg_list);
	printf("\n");
}
