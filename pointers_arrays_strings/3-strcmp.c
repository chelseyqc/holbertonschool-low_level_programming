#include "main.h"

/**
* _strcmp - compares two strings
* @s1: the first string that's compared
* @s2: the second string that is compared
*
* Return: the difference of the two strings
*/
int _strcmp(char *s1, char *s2)
{
	int index;
	int diff;

	index = 0;
	diff = 0;
	while (s1[index] != '\0' && diff == 0)
	{
		diff = s1[index] - s2[index];
		index = index + 1;
	}
	return (diff);
}
