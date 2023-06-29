#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: memory area copied into
* @src: memory area copied
* @n: number of bytes
*
* Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index = index + 1;
	}
	return (dest);
}
