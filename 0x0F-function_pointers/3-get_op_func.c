#include "3-calc.h"

#define MAX_OP 5

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: the op to perform
 *
 * Return: pointer to op_func
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i <= MAX_OP && ops[i].op)
	{
		if (*(ops[i].op) == *s && *(ops[i].op + 1) == '\0')
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
