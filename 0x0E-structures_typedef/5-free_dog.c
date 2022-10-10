#include "dog.h"

/**
 * free_dog - free the space allocated for struct dog
 * @d: point to dog
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}
