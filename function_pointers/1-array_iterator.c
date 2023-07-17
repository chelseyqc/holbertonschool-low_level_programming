#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - execute a function given as a parameter on each element
* of an array
* @array: elements
* @size: size of the array
* @action: pointer to the function you need to use
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array != NULL && action != NULL)
	{
		index = 0;
		while (index < size)
		{
			action(array[index]);
			index = index + 1;
		}
	}
}
