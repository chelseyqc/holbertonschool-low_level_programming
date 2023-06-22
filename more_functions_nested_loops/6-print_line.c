#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: number inputed
*
* Return: void
*/
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		line = 0;
		while (line < n)
		{
			_putchar('_');
			line = line + 1;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
