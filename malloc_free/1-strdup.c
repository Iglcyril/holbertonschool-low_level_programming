#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return to a new allocated space in memory
 * @str: the string
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *x;
	unsigned int i, len;

	if (str == 0)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	;

	x = malloc(sizeof(char) * (len + 1));
	if (x == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		x[i] = str[i];

	return (x);
}
