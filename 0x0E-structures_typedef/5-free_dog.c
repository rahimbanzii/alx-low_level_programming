#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -This frees memory allocated for a struct dog
 * @d:The struct dog to free
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
