#include "main.h"

/**
 * print_last_digit - computes and prints the last digit of a number
 * @n: the number which last digit is to be printed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -n % 10;
	else
		last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
