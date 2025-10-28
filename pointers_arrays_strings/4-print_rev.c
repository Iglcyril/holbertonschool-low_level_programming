#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* str - entry point
* @a : pointer
* Return (0)
*/
void print_rev(char *s)
{
int a = 0;

	while (s[a] != '\0')
		a++;

	a--;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}


_putchar('\n');
}
