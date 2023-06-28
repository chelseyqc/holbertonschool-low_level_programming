#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string
* to uppercase
* @s: the string
*
* Return: the string in uppercase
*/
char *string_toupper(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - 32;
		}
		index = index + 1;
	}
	return (s);
}
