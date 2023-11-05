#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes P’s struct
 * @d: pointer to struct puppy to initialize
 * @name: dogg’s name
 * @age: p’s age
 * @owner: the dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

