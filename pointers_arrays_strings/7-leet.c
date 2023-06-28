#include "main.h"

/**
* leet - encodes a string to 1337
* @s: the string
*
* Return: a string encoded to 1337
*/
char *leet(char *s)
{
	int index;
	char letter[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int number[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int index_two;

	index = 0;
	while (s[index] != '\0')
	{
		index_two = 0;
		while (letter[index_two] != '\0')
		{
			if (s[index] == letter[index_two])
			{
				s[index] = number[index_two];
			}
			index_two = index_two + 1;
		}
	index = index + 1;
	}
	return (s);
}
