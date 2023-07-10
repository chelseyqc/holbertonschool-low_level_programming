#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - returns a pointer to a 2D array of integers
* @width: width of the array
* @length: length of the array
*
* Return: a pointer to a 2D array, or NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int width_index;
	int height_index;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	width_index = 0;
	while (width_index < height)
	{
		array[width_index] = malloc(sizeof(int) * width);
		if (array[width_index] == NULL)
		{
			height_index = 0;
			while (height_index < width_index)
			{
				free(array[height_index]);
				height_index = height_index + 1;
			}
			free(array);
			return (NULL);
		}
		height_index = 0;
		while (height_index < width)
		{
			array[width_index][height_index] = 0;
			height_index = height_index + 1;
		}
		width_index = width_index + 1;
	}
	return (array);
}
