#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* flip_bits - returns the number of bits you would need to flip to get from
* one number to another
* @n: the first number
* @m: the other number
*
* Return: the numbers of bits needed to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	int count; /* variable to keep track of number of bits */

	result = (n ^ m);
	count = 0; /* currently no flips */
	while (result > 0) /* while there are still differences to flip */
	{
		if ((result & 1) == 1) /* check if 1 (= different) */
		{
			count = count + 1; /* +1 flip */
		}
		result = result >> 1; /* move to right for next maybe flip*/
	}
	return (count);
}
