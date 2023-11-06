#include "dog.h"

/**
 * free_dog - Write a function that frees dogs
 *
 * @d: Pointer to structure
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
