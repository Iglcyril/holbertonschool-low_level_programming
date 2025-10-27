#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * print_number - check the code
 * @a : number
 * return always 0 (success)
 * print_number - entry point
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);

	_putchar('0' + (n % 10));
}

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (a % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (a % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			print_number(a);
		}

		if (a != 100)
			_putchar(' ');

	}
	_putchar('\n');
	return (0);
}
