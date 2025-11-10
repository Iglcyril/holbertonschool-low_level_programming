#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of characters
 * @size: size of the array
 * @c: character to initializes the array
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
