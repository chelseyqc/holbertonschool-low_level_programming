#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers using the
* linear search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in an array
* @value: the value to search for
*
* Return: the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	index = 0;
	if (array == NULL)
	{
		return (-1);
	}

	while (index < size)
	{
		printf("Value checked array[%lu]", index);
		printf(" = [%d]\n", array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index = index + 1;
	}
	return (-1);
}
