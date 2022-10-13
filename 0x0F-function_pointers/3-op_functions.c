#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second number
 *
 * Return: the result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the subtraction of two ints
 * @a: the first int
 * @b: the second int
 *
 * Return: the result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes the multiplication of two ints
 * @a: the first int
 * @b: the second int
 *
 * Return: the result of the subtraction
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - computes the divition of two ints
 * @a: the first int
 * @b: the second int
 *
 * Return: the result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - computes the modulus of two ints
 * @a: the first int
 * @b: the second int
 *
 * Return: the result of the modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
