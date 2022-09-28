#include "main.h"

/**
 * _pow_recursion - computes the power of a num raised to a num
 * @x: the base
 * @y: the power
 *
 * Return: the computed power or -1 if y is less that 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
}
