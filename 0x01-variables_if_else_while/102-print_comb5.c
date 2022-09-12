#include <stdio.h>

/**
 * print_digits - prints digits on stdio stream
 *@d1: first digit to be printed
 *@d2: 2nd digit to be printed
 *@d3: 3rd digit to be printed
 *@d4: 4th digit to be printed
 *
 *Description: prints digits of the number combinations
 */
void print_number(int d1, int d2, int d3, int d4)
{
	putchar(d1);
	putchar(d2);
	putchar((int)' ');
	putchar(d3);
	putchar(d4);
	if (d1 != '9' || d2 != '8' || d3 != '9' || d4 != '9')
	{
		putchar((int)',');
		putchar((int)' ');
	}
}

/**
 * set_digits - set the digits of the second number
 *@d1: the first digit
 *@d2: the 2nd digit
 *@d3: pointer to 3rd digit
 *@d4: pointer to 4th digit
 *
 *Description: set the digits of the second combination
 */
void set_digits(int d1, int d2, int *d3, int *d4)
{
	if (d2 == '9')
	{
		*d3 = d1 + 1;
		*d4 = '0';
	}
	else
	{
		*d3 = d1;
		*d4 = d2 + 1;
	}
}

/**
 * main - entry point
 *Description: prints two two-digit possible comb of digits
 *Return: 0, if successful
 */
int main(void)
{
	int digit_1;
	int digit_2;
	int digit_3;
	int digit_4;

	for (digit_1 = '0'; digit_1 <= '9'; ++digit_1)
	{
		for (digit_2 = '0'; digit_2 <= '9'; ++digit_2)
		{
			set_digits(digit_1, digit_2, &digit_3, &digit_4);
			for (; digit_3 <= '9'; ++digit_3)
			{
				if (digit_4 > '9')
					digit_4 = '0';
				for (; digit_4 <= '9'; ++digit_4)
				{
					print_number(digit_1, digit_2, digit_3, digit_4);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
