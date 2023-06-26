#include "main.h"

/**
* _puts - prints a string to stdout
* @str: the string to print
*
* Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
