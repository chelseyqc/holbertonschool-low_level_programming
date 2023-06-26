#include "main.h"

/**
* print_rev - prints a string in reverse followed by a newline
* @s: string to be printed
*
* Return: void
*/
void print_rev(char *s)
{
	char *count;

	count = s;
	while (*count != '\0')
	{
		count = count + 1;
	}
	count = count - 1;
	while (count >= s)
	{
		_putchar(*count);
		count = count - 1;
	}
	_putchar('\n');
}
