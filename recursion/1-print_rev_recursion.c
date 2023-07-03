#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s: the string to be printed
*
* Return: void
*/
void _print_rev_recursion(char *s)
{
	unsigned char index;

	index = 0;
	if (s[index] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[index]);
}
