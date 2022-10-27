#include "main.h"

void print_bin(unsigned long int num);

/**
 * print_binary - prints the binary representation of a number
 * @n: the given number
 *
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	print_bin(n);
}

/**
 * print_bin - prints bin rep of a number recursively
 * @num: the given number
 *
 */
void print_bin(unsigned long int num)
{
	unsigned long int n;
	int remainder;

	if (num == 0)
		return;

	n = num >> 1;
	remainder = num - (2 * n);
	print_bin(n);
	_putchar(remainder + '0');
}
