#include <stdio.h>

/**
 * main - entry point
 *Description: prints comma separated digits of decimal
 *Return 0, if successful
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit++);
		if (digit != '9')
		{
			putchar((int)',');
			putchar((int)' ');
		}
	}

	putchar((int)'\n');

	return (0);
}
