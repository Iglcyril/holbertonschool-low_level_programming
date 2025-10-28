#include <stdio.h>
#include "main.h"
/**
* swap_int - swaps the values of 2 integers
*@a : pointer
*@b : pointer
* Return (0)
*/
void swap_int(int *a, int *b)
{
int values = *a;
*a = *b;
*b = values;
}
