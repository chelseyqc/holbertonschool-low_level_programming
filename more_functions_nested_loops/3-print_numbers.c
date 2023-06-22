#include "main.h"

/**
* print_numbers - prints the numbers from 0 to 9
* followed by a new line
*
* Return: void
*/
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar(n + '0');
		n = n + 1;
	}
	_putchar('\n');
}
