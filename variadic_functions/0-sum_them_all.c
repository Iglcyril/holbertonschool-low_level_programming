#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * 
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int *operation;
	va_list ap;

	va_start(ap, n);

	printf("%d", sum_them_all);

	operation = va_arg(ap, unsigned int	*);

	va_end(ap);
}
