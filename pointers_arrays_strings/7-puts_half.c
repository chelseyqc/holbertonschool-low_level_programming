#include "main.h"

/**
* puts_half - prints half of a string
* @str: the string that will be printed
*
* Return: void
*/
void puts_half(char *str)
{
	int string;
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	string = (length + 1) / 2;
	while (string < length)
	{
		_putchar(str[string]);
		string = string + 1;
	}
	_putchar('\n');
}
