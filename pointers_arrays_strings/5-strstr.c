#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string who search
 * @needle: substring
 * Return: pointer occurence or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
