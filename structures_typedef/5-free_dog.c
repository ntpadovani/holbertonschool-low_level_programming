#include "dog.h"

/**
 * free_dog - Function that frees the struct.
 *
 * @d: The struct.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		return;
}
