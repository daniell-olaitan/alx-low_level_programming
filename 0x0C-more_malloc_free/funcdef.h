#ifndef DEF_H
#define DEF_H

#include "main.h"

/**
 * _memset - sets a memory space to a given character
 * @mem: the memory space
 * @c: the character to set
 * @size: the size of the memory to set
 *
 * Return: pointer to mem
 */
void *_memset(char *mem, char c, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; ++i)
	{
		*(mem + i) = c;
	}

	return (mem);
}

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
