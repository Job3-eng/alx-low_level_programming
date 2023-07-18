#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - initialize struct dog and freeing dog details in the memory
 * @d: details of the dog
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
