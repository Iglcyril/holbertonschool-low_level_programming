#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to allocated memory (initialized to 0).
 *         NULL if nmemb == 0, size == 0, or malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *byte_ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	byte_ptr = (char *)ptr;
	for (i = 0; i < nmemb * size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
