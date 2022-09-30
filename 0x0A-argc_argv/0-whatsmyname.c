#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments to main
 * @argv: array of arguments to main
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	while (*argv[0])
	{
		_putchar(*argv[0]);
		argv[0]++;
	}

	(void) argc;
	_putchar('\n');

	return (0);
}
