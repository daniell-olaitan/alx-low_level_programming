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
		printf("Name: ");
		if (d->name == NULL)
			printf("%s", err);
		else
			printf("%s", d->name);

		printf("Age: %f", d->age);
		printf("Owner: ");
		if (d->owner == NULL)
			printf("%s", err);
		else
			printf("%s", d->owner);
	}
}
