#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name
 * @name: the name print
 * @f: pointer to a fonction
 * Description: if f is not NULL call the function f with name as argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
