#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: number to be changed
* @index: the given index
*
* Return: 1 if it worked, -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(*n) * 8))
	{
		return (-1); /* it did not work */
	}
	i = 1; /* initialise to 1 */
	i = i << index; /* shifts value of i by index */
	*n = *n & ~i; /* set the bit at i to reverse */
	return (1); /* it worked */
}
