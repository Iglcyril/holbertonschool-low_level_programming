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
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		while (*needle != '\0' && *haystack == *needle)
			{
				needle++;
				haystack++;
			}
			if (*needle == '\0')
				return (haystack);

			haystack++;
	}
	return (NULL);
}
