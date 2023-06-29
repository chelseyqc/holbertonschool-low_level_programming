#include "main.h"

/**
* _memset - fills the first n bytes of memory area pointed to by
* s with the constant byte b
* @s: pointer of memory area
* @b: constant byte
* @n: bytes of memory
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		s[index] = b;
		index = index + 1;
	}
	return (s);
}
