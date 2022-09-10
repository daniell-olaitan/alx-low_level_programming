#include <stdio.h>

/**
 * main - entry point
 *Description: prints all the digit of hexadecimal
 *Return: 0, if successful
 */
int main(void)
{
	int int_digit = '0';
	int char_digit = 'a';

	while (int_digit <= '9')
		putchar(int_digit++);

	while (char_digit <= 'f')
		putchar(char_digit++);

	putchar((int)'\n');

	return (0);
}
