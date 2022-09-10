#include <stdio.h>

/**
 * main - entry point
 *Description: prints all the digit of base 10
 *Return: 0, if successful
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
		putchar(digit++);

	putchar((int)'\n');

	return (0);
}
