#include <stdio.h>
#include "main.h"
/**
* swap_int - check the code
*@values : pointer
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int values = *a;
*a = *b;
*b = values;
}
