#include <stdio.h>
#include "main.h"
/**
* _strlen - swaps the values of 2 integers
*@s : pointer
* Return (0)
*/
int _strlen(char *s)
{
int len = 0;

	while (s[len] != '\0')
	len++;

return (len);
}
