#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Return: always 0 (success)
 */
int main(void)
{
	char hexa;

	for (hexa = '0'; hexa <= '9'; hexa++)
		putchar(hexa);

	for (hexa = 'a'; hexa <= 'f'; hexa++)
		putchar(hexa);

	putchar('\n');
	return (0);
}
