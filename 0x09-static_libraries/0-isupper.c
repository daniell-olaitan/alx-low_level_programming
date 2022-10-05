#include "main.h"

/**
 * _isupper - checks if a character is a uppercase
 * @c: the ascci value of the char to check
 *
 * Return: 1 if true, 0 otherwise
 */
int _isupper(int c)
{
	char ch = c;

	if (ch >= 'A' && ch <= 'Z')
		return (1);

	return (0);
}
