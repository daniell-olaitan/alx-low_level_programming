#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of command line args
 * @argv: array of command line args
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, status, zero = 0, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			status = atoi(argv[i]);
			if (!status)
				zero++;
		}

		if (argc - 1 == zero)
		{
			printf("%d\n", 0);
			return (0);
		}
		else if (!zero)
		{
			for (i = 1; i < argc; ++i)
				sum += atoi(argv[i]);

			printf("%d\n", sum);
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
}
