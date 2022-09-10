#include <stdio.h>

/**
 * main - entry point
 *Description: prints combination of 2 digits
 *Return: 0, if successful
 */
int main(void)
{
	int first_digit = '0';
	int second_digit;

	while (first_digit <= '8')
	{
		second_digit = first_digit + 1;
		while (second_digit <= '9')
		{
			putchar(first_digit);
			putchar(second_digit);
			if ((first_digit != '8') && (second_digit != '9'))
			{
				putchar((int)',');
				putchar((int)' ');
			}

			second_digit++;
		}

		first_digit++;
	}

	return (0);
}
