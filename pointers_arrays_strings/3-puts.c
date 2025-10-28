#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* str - entry point
* @s : pointer
* Return (0)
*/
void _puts(char *str)
{
int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}

_putchar('\n');
}
