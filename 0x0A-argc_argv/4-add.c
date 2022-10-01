#include <stdio.h>
#include <stdlib.h>

int check(char *);

/**
 * main - adds positive numbers
 * @argc: number of command line args
 * @argv: array of command line args
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int status, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			status = check(argv[i]);
			if (!status)
			{
				sum += atoi(argv[i]);
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

/**
 * check - checks if a string is alphanumeric
 * @str: the input string
 *
 * Return: 1 if alphanumeric, 0 otherwise
 */
int check(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (1);
		str++;
	}

	return (0);
}
