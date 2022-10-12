#include "function_pointers.h"

/**
 * print_name - prints a given name
 * @name: the name to be printed
 * @f: pointer to a function to print the name
 *
 */
void print_name(char *name, void (f*)(char *))
{
	f(name);
}
