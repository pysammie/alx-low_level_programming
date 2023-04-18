#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the dogs
 * @d: pointer to structure dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
