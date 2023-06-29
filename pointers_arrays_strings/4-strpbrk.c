#include "main.h"

/**
* _strpbrk - searches a string for a set of bytes
* @s: the string to be searched
* @accept: the string that contained the accepted characters
*
* Return: a pointer to the byte in s that matches accept or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int index_a;
	int index_b;

	index_a = 0;
	while (s[index_a] != '\0')
	{
		index_b = 0;
		while (accept[index_b] != '\0')
		{
			if (s[index_a] == accept[index_b])
			{
				return (&(s[index_a]));
			}
			index_b = index_b + 1;
		}
		index_a = index_a + 1;
	}
	return ('\0');
}
