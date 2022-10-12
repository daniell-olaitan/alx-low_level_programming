#ifndef CALC_H
#define CALC_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f : The function associated
 */
typedef struct op op
{
	char *p;
	int (*f)(int a, int b);
} op_t;
