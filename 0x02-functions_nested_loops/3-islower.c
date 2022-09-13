#include "main.h"

/**
 * _islower - checks if a character is a lowercase
 * @c: the ascci value of the char to check
 *
 * Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
	char ch = c;

	if (ch >= 'a' && ch <= 'z')
		return (1);

	return (0);
}
