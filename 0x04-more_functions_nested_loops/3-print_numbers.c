#include "main.h"

/**
 * print_numbers - prints numbers from 0 through 9
 *
 */
void print_numbers(void)
{
	int number = 0;

	while(number <= 9)
	{
		_putchar(number + '0');
		number++;
	}

	_putchar('\n');
}
