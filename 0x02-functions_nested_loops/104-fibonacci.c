#include <stdio.h>

/**
 * main - prints the first 98 fibonacci series
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int carry;
	unsigned long tmp, tmp_b;
	unsigned long n1, n2, b1, b2;

	n1 = 0;
	n2 = 1;
	for (i = 1; i <= 91; ++i)
	{
		tmp = n1 + n2;
		n1 = n2;
		n2 = tmp;
		printf("%lu ", tmp);
	}

	b1 = n1 % 1000;
	n1 = n1 / 1000;
	b2 = n2 % 1000;
	n2 = n2 / 1000;
	while (i <= 98)
	{
		carry = (b1 + b2) / 1000;
		tmp = n1 + n2 + carry;
		n1 = n2;
		n2 = tmp;
		tmp_b = b1 + b2 - carry * 1000;
		b1 = b2;
		b2 = tmp_b;
		if (tmp >= 100)
			printf("%lu%lu", tmp, tmp_b);
		else
			printf("%lu0%lu", tmp, tmp_b);

		if (i != 98)
			printf(", ");

		i++;
	}

	printf("\n");
	return (0);
}
