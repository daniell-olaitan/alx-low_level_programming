#ifndef DEF_H
#define DEF_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - computes len of str
 * @str: the given str
 *
 * Return: len of str
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	if (str)
	{
		for (i = 0; *str; ++i)
		{
			str++;
		}
	}

	return (i);
}

#endif
