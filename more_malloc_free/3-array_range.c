#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @min: minimum value
* @max: maximum value
*
* Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int index;
	int *array;

	index = 0;
	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(*array) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		array[index] = min;
		index = index + 1;
		min = min + 1;
	}
	return (array);
}
