#include "main.h"

/**
* rev_string - reverses a string
* @s: the string
*
* Return: void
*/
void rev_string(char *s)
{
	int length;
	int swap_one;
	int swap_two;
	int temp;

	length = 0;
	while (s[length] != '\0')
	{
		length = length + 1;
	}
	swap_one = length - 1;
	swap_two = 0;
	while (swap_two < (length / 2))
	{
		temp = s[swap_two];
		s[swap_two] = s[swap_one];
		s[swap_one] = temp;
		swap_one = swap_one - 1;
		swap_two = swap_two + 1;
	}
}
