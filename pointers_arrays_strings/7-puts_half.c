#include "main.h"
/**
* puts_half - prints the second half of a string
* @str: pointer
*/
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a])
		a++;
	b = (a + 1) / 2;

	while (b < a)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
