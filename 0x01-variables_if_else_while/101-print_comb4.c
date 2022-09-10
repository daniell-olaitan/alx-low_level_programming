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
	int thrid_digit;

	while (first_digit <= '8')
	{
		second_digit = first_digit + 1;
		while (second_digit <= '9')
		{
			third_digit = second_digit + 1;
			while (third_digit <= '9')
			{
				putchar(first_digit);
				putchar(second_digit);
				putchar(third_digit);
				if ((first_digit != '7') || (second_digit != '8') || (third_digit != '9'))
				{
					putchar((int)',');
					putchar((int)' ');
				}

				third_digit++;
			}

			second_digit++;
		}

		first_digit++;
	}

	putchar((int)'\n');

	return (0);
}
