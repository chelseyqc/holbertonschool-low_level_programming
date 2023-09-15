#include "search_algos.h"

/**
* print_array - the array
* @array: a pointer to the first element of the array to search in
* @low: lower index of the array
* @high: higher index of the array
*
* Return: void
*/
void print_array(int *array, int low, int high)
{
	printf("Searching in array: ");
	while (low <= high)
	{
		printf("%d", array[low]);
		if (low != high)
		{
			printf(", ");
		}
		low = low + 1;
	}
	printf("\n");
}

/**
* binary_search - searches for a value in a sorted array of integers using the
* binary search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of the elements in array
* @value: the value to search for
*
* Return: the index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t middle;
	size_t index;

	index = 0;
	low = index;
	high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		print_array(array, low, high);
		middle = low + (high - low) / 2;
		if (array[middle] == value)
		{
			return (middle);
		}
		if (array[middle] < value)
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}
	return (-1);
}
