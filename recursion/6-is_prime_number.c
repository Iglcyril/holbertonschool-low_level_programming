#include "main.h"
#include <math.h>
/**
 * check_if_prime_number - check if n is prime
 * @n: number to check
 * @x: current divisor
 * Return: if prime or not
 */
int check_if_prime_number(int n, int x)
{
	if (x * x > n)
		return (1);
	if (n % x == 0)
		return (0);
	return (check_if_prime_number(n, x + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: input integer
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	return (check_if_prime_number(n, 2));
}
