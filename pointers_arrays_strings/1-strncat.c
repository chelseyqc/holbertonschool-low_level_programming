#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: where the string will append
* @src: the string that will be appended
* @n: the number of bytes
*
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int ptr_one;
	int ptr_two;

	ptr_one = 0;
	ptr_two = 0;
	while (dest[ptr_one] != '\0')
	{
		ptr_one = ptr_one + 1;
	}
	while (src[ptr_two] != '\0' && ptr_two < n)
	{
		dest[ptr_one] = src[ptr_two];
		ptr_one = ptr_one + 1;
		ptr_two = ptr_two + 1;
	}
	dest[ptr_one] = '\0';
	return (dest);
}
