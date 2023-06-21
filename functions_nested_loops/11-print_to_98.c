#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all numbers from n to 98
* followed by a new line
* @n: input number
*
* Return: void
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			{
				if (n == 98)
				{
					printf("%d", n);
					printf("\n");
				}
				else
				{
					printf("%d, ", n);
				}
			n = n + 1;
			}
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}
			n = n - 1;
		}
	}
}
