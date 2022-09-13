#include "main.h"

/**
 * print_last_digit - computes and prints the last digit of a number
 * @n: the number which last digit is to be printed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		return (-n % 10);

	return (n % 10);
}
