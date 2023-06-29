#include "main.h"

/**
* _strstr - finds the first occurence of the substring needle in haystack
* @haystack: the string
* @needle: the substring
*
* Return: a pointer to the beginning of needle or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int index;

	index = 0;
	if (needle[index] == 0)
	{
		return (haystack);
	}
	while (haystack[index] != '\0')
	{
			while (haystack[index] == needle[index])
			{
				if (needle[index + 1] == '\0')
				{
					return (haystack);
				}
				index = index + 1;
			}
			haystack = haystack + 1;
	}
	return ('\0');
}
