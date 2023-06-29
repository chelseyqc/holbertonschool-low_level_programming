#include "main.h"

/**
* _strchr - locates a character in a string
* @s: the string
* @c: the character in the string
*
* Return: a pointer to the first occurance of c or NULL if not found
*/
char *_strchr(char *s, char c)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			return (&(s[index]));
		}
		index = index + 1;
	}
	return ("NULL");
}
