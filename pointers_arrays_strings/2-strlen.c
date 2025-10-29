#include "main.h"
#include <string.h>
/**
* _strlen - returns the lenght of a string
* @s: pointer to the string to evaluate
* Return: the lenght of the string
*/
int _strlen(char *s)
{
int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

return (len);
}
