#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase ina number of places
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int number_of_iter = 10;
	char alpha;

	while (i++ < number_of_iter)
	{
		alpha = 'a';
		while (alpha <= 'z')
			_putchar(alpha++);

		_putchar('\n');
	}
}
