#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* set_bit - sets the value of a bit to 1 at the given index
* @n: the input number
* @index: the given index
*
* Return: 1 if worked, else -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(*n) * 8)) /* checks if index is > bit total num */
	{
		return (-1); /* did not work */
	}
	i = 1; /* initialise to 1 */
	i = i << index; /* shifts value of i by index */
	*n = *n | i; /* set the bit at i to 1 */
	return (1); /* it worked */
}
