#include "main.h"

/**
* _strncpy - copies a string
* @dest: where the string will be copied
* @src: the string that will be copied
* @n: number of characters copied to dest
*
* Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int ptr_to_dest;

	ptr_to_dest = 0;
	while (ptr_to_dest < n && src[ptr_to_dest] != '\0')
	{
		dest[ptr_to_dest] = src[ptr_to_dest];
		ptr_to_dest = ptr_to_dest + 1;
	}
	while (ptr_to_dest < n)
	{
		dest[ptr_to_dest] = '\0';
		ptr_to_dest = ptr_to_dest + 1;
	}
	return (dest);
}
