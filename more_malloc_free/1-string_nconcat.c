#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * string_nconcat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: max number of s2
 * Return: pointer to allocated space
 * Returns NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *x;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	;
	for (len2 = 0; s2[len2] != '\0'; len2++)
	;
	if (n >= len2)
		n = len2;

	x = malloc(sizeof(char) * (len1 + n + 1));
	if (x == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		x[i] = s1[i];

	for (i = len1; i < len1 + n; i++)
		x[i] = s2[i - len1];

	x[len1 + n] = '\0';
	return (x);

}
