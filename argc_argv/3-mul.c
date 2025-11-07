#include "main.h"
#include <stdlib.h>
/**
 * main - multiple two numbers
 * @argc: argument count
 * @argv: argument
 * Return: 0 to succes and 1 for error
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	result = x * y;
	printf("%d\n", result);

	return (0);
}
