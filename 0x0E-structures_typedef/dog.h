#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct dog dog_t;

/**
 * struct dog - dog properties
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);

#endif
