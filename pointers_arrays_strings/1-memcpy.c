#include "main.h"
/**
 * _memcpy - fills memory with a constant byte
 * @dest: memory area
 * @src: source memory
 * @n: numbers of bytes
 * Return: pointer to memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];


	return (dest);
}
