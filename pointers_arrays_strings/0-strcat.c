#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: where the string wil appended
* @src: the string that will be appended
*
* Return: the pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int ptr_one;
	int ptr_two;

	ptr_one = 0;
	ptr_two = 0;
	while (dest[ptr_one] != '\0')
	{
		ptr_one = ptr_one + 1;
	}
	while (src[ptr_two] != '\0')
	{
		dest[ptr_one] = src[ptr_two];
		ptr_one = ptr_one + 1;
		ptr_two = ptr_two + 1;
	}
	dest[ptr_one] = '\0';
	return (dest);
}
