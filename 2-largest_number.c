#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: 1st int
 * @b: 2nd int
 * @c: 3rd int
 *
 * Return: the largest int
 */
int largest_number(int a, int b, int c)
{
	if (a >= b && a >= c)
		return (a);
	else if (b >= a && b >= c)
		return (b);

	return (c);
}
