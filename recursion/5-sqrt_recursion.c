#include "main.h"
#include <math.h>
/**
 * square_evidence - helper function to find square root
 * @n: number
 * @x: current guess
 *
 * Return: square root or -1
 */
int square_evidence(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (square_evidence(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: natural square root, or -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (square_evidence(n, 1));
}
