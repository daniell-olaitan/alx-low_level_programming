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

		if (!zero)
		{
			for (i = 1; i < argc; ++i)
			{
				status = atoi(argv[i]);
				if (status < 0)
				{
					printf("Error\n");
					return (1);
				}

				sum += status;
			}

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
