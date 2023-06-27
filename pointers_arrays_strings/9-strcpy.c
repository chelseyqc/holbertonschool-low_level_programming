#include "main.h"

/**
* _strcpy - copies the string pointed to by src
* @dest: where the string will be copied
* @src: the string that will be copied
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int ptr_to_dest;

	ptr_to_dest = 0;
	while (src[ptr_to_dest] != '\0')
	{
		dest[ptr_to_dest] = src[ptr_to_dest];
		ptr_to_dest = ptr_to_dest + 1;
	}
	dest[ptr_to_dest] = '\0';
	return (dest);
}
