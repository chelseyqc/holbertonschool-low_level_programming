#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the string
* @accept: the prefix to be measured
*
* Return: the number of bytes in s which consists of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int index;
	int index_two;
	unsigned int bytes;

	index = 0;
	bytes = 0;

	while (s[index] != '\0')
	{
		index_two = 0;
		while (accept[index_two] != '\0')
		{
			if (s[index] == accept[index_two])
			{
				bytes = bytes + 1;
				break;
			}
			index_two = index_two + 1;
		}
		if (accept[index_two] == '\0')
		{
			break;
		}
		index = index + 1;
	}
	return (bytes);
}
