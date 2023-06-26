#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: integer to be swapped with b
* @b: integer to be swapped with a
*
* Return: void
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
