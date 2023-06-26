#include "main.h"

/**
* _strlen - checks the legnth of a string
* @s: the string
*
* Return: length of the string
*/
int _strlen(char *s)
{
	int length;
	
	length = 0;
	while (s[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}
