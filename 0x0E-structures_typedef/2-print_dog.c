#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct d to be printed
 *
 */
void print_dog(struct dog *d)
{
	char *err = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name ? d->name : err));
		printf("Age: %f\n", (d->age ? d->age : 0));
		printf("Owner: %s\n", (d->owner ? d->owner : err));
	}
}
