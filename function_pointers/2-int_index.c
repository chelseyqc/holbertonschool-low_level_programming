#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: the elements
* @size: the number of elements in the array
* @cmp: a pointer to the function used to compare values
*
* Return: the index of the first element for which the cmp function does not
* return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	index = 0;
	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	while (index < size)
	{
		if ((cmp)(array[index]) == 0)
		{
			index = index + 1;
		}
		else
		{
			return (index);
		}
	}
	return (-1);
}
