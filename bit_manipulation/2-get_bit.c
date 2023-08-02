#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_bit - returns the value of a bit at a given index
* @n: input number
* @index: the given index
*
* Return: the value of the bit at index, -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	bit = 0;
	while (bit < index)
	{
		n = n >> 1;
		bit = bit + 1;
	}
	return (n & 1);
}
