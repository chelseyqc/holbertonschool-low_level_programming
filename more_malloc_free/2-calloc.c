#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array using malloc
* @nmemb: number of memory bytes
* @size: size of bytes
*
* Return: pointer to allocated memory, or NULL if fails/parameters is 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *ptr;

	index = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (index < size * nmemb)
	{
		ptr[index] = 0;
		index = index + 1;
	}
	return (ptr);
}
