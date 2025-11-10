#include <stdlib.h>
/**
 * *str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *x;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	;
	for (len2 = 0; s2[len2] != '\0'; len2++)
	;

	x = malloc(sizeof(char) * (len1 + len2 + 1));
	if (x == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		x[i] = s1[i];

	for (j = 0; j < len2; i++, j++)
		x[i] = s2[j];

	return (x);
}
