#include "main.h"

/**
* cap_string - capitalises all words of a string
* @s: the string
*
* Return: the string with capitalised words
*/
char *cap_string(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (index == 0)
		{
			if ((s[index] >= 'a') && (s[index] <= 'z'))
			{
				s[index] = s[index] - 32;
			}
		}
		else if ((s[index] == ' ')
			|| (s[index] == '\n')
			|| (s[index] == '\t')
			|| (s[index] == '.'))
		{
			if ((s[index + 1] >= 'a') && (s[index + 1] <= 'z'))
			{
				s[index + 1] = s[index + 1] - 32;
			}
		}
		index = index + 1;
	}
	return (s);
}
