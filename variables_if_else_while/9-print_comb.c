#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Return: always 0 (success)
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
