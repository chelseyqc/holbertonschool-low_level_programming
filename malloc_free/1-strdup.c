#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: given string
*
* Return: NULL is str is NULL, or a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	int src_index;
	int dest_index;
	char *copy;

	src_index = 0;
	dest_index = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[src_index] != '\0')
	{
		src_index = src_index + 1;
	}
	copy = malloc(sizeof(char) * (src_index + 1));
	while (dest_index < src_index)
	{
		copy[dest_index] = str[dest_index];
		dest_index = dest_index + 1;
	}
	return (copy);
}
