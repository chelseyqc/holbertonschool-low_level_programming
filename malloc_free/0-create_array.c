#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars and initializes it with a
* specific char
* @size: the size of the array
* @c: the specific char
*
* Return: NULL if size = 0 or a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (index < size)
	{
		array[index] = c;
		index = index + 1;
	}
	return (array);
}
