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
			printf("%s\n", err);
		else
			printf("%s\n", d->name);

		printf("Age: %.1f\n", d->age);
		printf("Owner: ");
		if (d->owner == NULL)
			printf("%s\n", err);
		else
			printf("%s\n", d->owner);
	}
}
