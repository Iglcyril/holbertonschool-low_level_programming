#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*main - entry point
*Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int LastDigit;

	LastDigit = n % 10;

	printf("Last digit of %d is %d ", n, LastDigit);

	return (0);
}
