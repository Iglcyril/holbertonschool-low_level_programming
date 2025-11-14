#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free space
 * @d: Pointer to the structure to print
 * Description: free memory
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
