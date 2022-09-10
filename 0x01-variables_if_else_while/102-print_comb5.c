#include <stdio.h>

/**
 * main - entry point
 *Description: prints two two-digit possible comb of digits
 *Return: 0, if successful
 */
int main(void)
{
	int digit_1 = '0';
	int digit_2;
	int digit_3;
	int digit_4;

	while (digit_1 <= '9')
	{
		digit_2 = '0';
		while (digit_2 <= '9')
		{
			digit_3 = digit_2;
			while (digit_3 <= '9')
			{
				digit_4 = digit_2 + 1;
				while (digit_4 <= '9')
				{
					putchar(digit_1);
					putchar(digit_2);
					putchar((int)' ');
					putchar(digit_3);
					putchar(digit_4);
					if (digit_1 != '9' || digit_2 != '8' || digit_3 != '9' || digit_4 != '9')
					{
						putchar((int)',');
						putchar((int)' ');
					}

					digit_4++;
				}

				digit_3++;
			}

			digit_2++;
		}

		digit_1++;
	}

	putchar('\n');

	return (0);
}
