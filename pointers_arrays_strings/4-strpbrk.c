#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locate the first occurence
 * @s: string
 * @accept: bytes
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
