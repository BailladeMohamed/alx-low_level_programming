#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - it frees the pup’s memory space
 * @d: the pointer to the mem to b freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

