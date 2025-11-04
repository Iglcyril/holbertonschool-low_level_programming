#include "main.h"
/**
 * _strspn - gets lenght substring
 * @s: string to check
 * @accept: allowed characters
 * Return: lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			return (i);
	}
	return (i);
}
