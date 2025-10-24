#include "main.h"
/**
 * isalpha - check the code
 * Return: Always 0.
 */

int _isalpha(int c)

{
	if (c >= 'a' && c <= 'Z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
