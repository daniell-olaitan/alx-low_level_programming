#include "main.h"

/**
 * main - prints the no of args passed into main
 * @argc: number of args passed
 * @argv: array of args passed into main
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	_putchar((argc - 1) + '0');
	_putchar('\n');
}
