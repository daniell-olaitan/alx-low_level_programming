#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum no of coins to make change for an amount of money
 * @argc: no of cmd line args
 * @argv: array of cmd line args
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, min = 0;
	int cents;
	int cents_d[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5 && cents > 0; ++i)
		{
			while (cents_d[i] <= cents)
			{
				cents -= cents_d[i];
				min++;
			}
		}

		printf("%d\n", min);
	}

	return (0);
}
