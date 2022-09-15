#include "main.h"

/**
 * print_numbers - prints numbers from 0 through 9
 *
 */
void print_numbers(void)
{
	char number = '0';

	while(number <= '9')
	{
		_putchar(number);
		number++;
	}

	_putchar('\n');
}
