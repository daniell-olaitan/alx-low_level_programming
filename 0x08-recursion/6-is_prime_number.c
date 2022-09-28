#include "main.h"

/**
 * is_prime - determines if number is prime
 * @n: the number
 * @div: the divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int div)
{
	if (div * div >= n)
		return (1);

	if (n % div == 0 || n < 2)
		return (0);

	return (is_prime(n, div + 1));
}

/**
 * is_prime_number - determines if a number is a prime number
 * @n: the given number
 *
 * Return: 1 if number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
