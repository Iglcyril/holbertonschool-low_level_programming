#include "main.h"
/**
* print_rev - prints a string
* @s: pointer to the string to reverse

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
