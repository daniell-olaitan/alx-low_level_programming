#include "main.h"

/**
 * _isalpha - checks if a given char is alphabet
 * @c: the char being checked
 *
 * Return: 1 if true, otherwise 0
 */
int _isalpha(int c)
{
	char ch = c;
	int lower = ch >= 'a' && ch <= 'z';
	int upper = ch >= 'A' && ch <= 'Z';

	if (lower || upper)
		return (1);

	return (0);
}
