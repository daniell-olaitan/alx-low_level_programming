#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments to main
 * @argv: array of arguments to main
 *
 * Return: an int depending on the exit status
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	char *err = "Error\n";
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("%s", err);
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	op_func = get_op_func(op);
	if (op_func != NULL)
	{
		printf("%d\n", op_func(a, b));
		return (0);
	}

	printf("%s", err);
	exit(99);
}
