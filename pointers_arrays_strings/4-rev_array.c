#include "main.h"

/**
* reverse_array - reverses the contents of an array of integers
* @a: an array of integers
* @n: the number of elements to swap
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int swap_one;
	int swap_two;
	int temp;
	int length;

	length = 0;
	while (length < n)
	{
		length = length + 1;
	}
	swap_one = length - 1;
	swap_two = 0;
	while (swap_two < (n / 2))
	{
		temp = a[swap_two];
		a[swap_two] = a[swap_one];
		a[swap_one] = temp;
		swap_one = swap_one - 1;
		swap_two = swap_two + 1;
	}
}
