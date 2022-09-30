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
	int i, status, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			status = atoi(argv[i]);
			if (status)
			{
				sum += status;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
