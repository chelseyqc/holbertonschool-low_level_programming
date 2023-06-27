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
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src [index];
		index = index + 1;
	}
	dest[index] = '\0';
	return (dest);
}
