#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @n: the number which sign is to be printed
 *
 * Return: 1 if n is +ve, 0 if 0, and -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
