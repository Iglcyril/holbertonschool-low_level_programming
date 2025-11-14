#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Print a structure 
 * @d: Pointer to the structure to print
 * Description: Prints name, age, prints
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("name: %s\n", (d->name != NULL) ? d->name : "unknow");
	printf("age: %f\n", d->age);
	printf("owner: %s\n", (d->owner != NULL) ? d->owner : "unknow");
}
