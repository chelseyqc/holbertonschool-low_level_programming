#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet ten times
* in lowercase followed by a new line
*
* return: void
*/
void print_alphabet_x10(void)
{
	char c = 'a';
	int  n = 0;

	while (n <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c = c + 1;
		}
		_putchar('\n');
		n = n + 1;
		c = 'a';
	}
}
