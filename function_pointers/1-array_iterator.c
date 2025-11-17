#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - execute a function
 * @array: pointer to the array
 * @size: number of elements in the array
 * @action: pointer to the fonction
 * Description: if array or action is NULL, nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
