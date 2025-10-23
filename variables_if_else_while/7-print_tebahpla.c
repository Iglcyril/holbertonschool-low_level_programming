#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Return: always 0 (success)
 */
int main(void)
{
	char rettel;

	for (rettel = 'z'; rettel >= 'a'; rettel--)
		putchar(rettel);

	putchar('\n');
	return (0);
}
