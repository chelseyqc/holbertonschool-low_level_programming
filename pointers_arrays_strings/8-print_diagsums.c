#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of two diagonals of a square matrix of ints
* @a: the input integer
* @size: the size of the square
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int index;
	int diag_a;
	int diag_b;

	index = 0;
	diag_a = 0;
	diag_b = 0;
	while (index < size)
	{
		diag_a = diag_a + a[index];
		a = a + size;
		index = index + 1;
	}
	a = a - size;
	index = 0;
	while (index < size)
	{
		diag_b = diag_b + a[index];
		a = a - size;
		index = index + 1;
	}
	printf("%d, %d\n", diag_a, diag_b);
}
