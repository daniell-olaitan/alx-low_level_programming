#include "main.h"

/**
 * sqrt_sub - finds the sqrt of an int
 * @n: the number
 * @a: the sqrt
 *
 * Return: sqrt
 */
int sqrt_sub(int n, int a)
{
	if (a * a > n)
		return (-1);

	if (a * a == n)
		return (a);

	return (sqrt_sub(n, a + 1));
}

/**
 * _sqrt_recursion - computes the natural sqrt of a number
 * @n: the given number
 *
 * Return: the computed sqrt
 */
int _sqrt_recursion(int n)
{
	return (sqrt_sub(n, 1));
}
