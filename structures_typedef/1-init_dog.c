#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to the structure dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 * Description: set name, age owner of the dog
 * if d is NULL does nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
