#ifndef FUNC_DEF_H
#define FUNC_DEF_H

#include "lists.h"

/**
 * _strlen - srtlen
 * @str: str
 *
 * Return: len of str
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * _strcpy - strcpy
 * @dest: destination str
 * @src: source str
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	unsigned int i;

	for (i = 0; src[i]; ++i)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

#endif
