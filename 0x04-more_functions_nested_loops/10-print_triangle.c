#include "main.h"

/**
 * print_triangle - draws a triangle on the stdout
 * @size: size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 0; j < size - i; ++j)
				_putchar(' ');

			for (j = 0; j < i; ++j)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
