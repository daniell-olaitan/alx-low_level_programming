#include "main.h"

/**
 * main - prints all the arguments that it receives
 * @argc: number of arguments passed
 * @argv: the array of arguments passed
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		while (*argv[i])
		{
			_putchar(*argv[i]);
			argv[i]++;
		}

		_putchar('\n');
	}

	return (0);
}
