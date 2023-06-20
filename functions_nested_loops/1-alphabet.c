#include "main.h"

/**
* main - prints the alphabet in lowercase
* followed by a new line
*
* return: void
*/
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
}
