#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiple two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 to succes, 1 for Error
 */
int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);

	return (0);
}
