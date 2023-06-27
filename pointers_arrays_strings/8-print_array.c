#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* followed by a new line
* @a: array of integers
* @n: input number
*
* Return: void
*/
void print_array(int *a, int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		printf("%d", a[index]);
		if (index < n - 1)
		{
			printf(", ");
		}
		index = index + 1;
	}
	printf("\n");
}

