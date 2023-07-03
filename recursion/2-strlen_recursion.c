#include "main.h"

/**
* _strlen_recursion - returns the legnth of a string
* @s: the string
*
* Return: the length of a string
*/
int _strlen_recursion(char *s)
{
	int index;

	index = 0;
	if (s[index] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
