#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_numbers - Entry point
 * @c: int char
 * Return: Always 0.
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
