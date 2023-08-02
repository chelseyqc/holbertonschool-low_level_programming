#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: points to a string of 0 and 1 chars
*
* Return: the converted number, else 0
*/
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int number;

	index = 0;
	number = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		number = number * 2 + (b[index] - '0');
		index = index + 1;
	}
	return (number);
}
