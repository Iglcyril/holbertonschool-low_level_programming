#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate a character in the string
 * @s: pointer
 * @c: character
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
