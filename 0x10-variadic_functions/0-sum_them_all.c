#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of args
 *
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arg_list, n);
	for (i = 0; i < n; ++i)
	{
		sum += va_arg(arg_list, int);
	}

	va_end(arg_list);
	return (sum);
}
