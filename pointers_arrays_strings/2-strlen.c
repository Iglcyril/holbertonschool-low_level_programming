#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _strlen - entry point
* @s : pointer
* Return (0)
*/
int _strlen(char *s)
{
int len = 0;

	while (s[len] != '\0')
	len++;

return (len);
}
