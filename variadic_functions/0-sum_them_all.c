#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return the sum of all
 * @n: number of arguments
 * ...: variadic
 * Return: sum of integers
 * if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int operation;
	va_list ap;
	int sum = 0;

	va_start(ap, n);
	for (operation = 0; operation < n; operation++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
