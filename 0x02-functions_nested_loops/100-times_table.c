#include "main.h"

/**
 * print_digits - prints digits of a given number
 * @n: the number to be printed
 *
 */
void print_digits(int n)
{
	if (n < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(' ');
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
}

/**
 * print_times_table - prints the time table to a given number
 * @n: the given number
 *
 */
void print_times_table(int n)
{
	int i;
	int j;
	int mul;

	for (i = 0; i <= n; ++i)
	{
		if (n > 15)
			break;
		
		for (j = 0; j <= n; ++j)
		{
			mul = i * j;
			if (j == 0)
				_putchar(mul + '0');
			else
				print_digits(mul);
			if (j == n)
				_putchar('\n');
			else if (n != 0)
				_putchar(',');
		}
	}
}
