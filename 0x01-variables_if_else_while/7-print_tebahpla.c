#include <stdio.h>

/**
 * main - entry point
 *Description: prints alphabets in reverse order
 *Return: 0, if successful
 */
int main(void)
{
	int ascii_value = 'z';

	while (ascii_value >= 'a')
		putchar(ascii_value--);

	putchar((int)'\n');

	return (0);
}
