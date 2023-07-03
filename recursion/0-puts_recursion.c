#include "main.h"

/**
* _puts_recursion - prints a string followed by a new line
* @s: the string that is printed
*
* Return: void
*/
void _puts_recursion(char *s)
{
	unsigned char index;

	index = 0;
	if (s[index] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[index]);
	_puts_recursion(s + 1);
}
