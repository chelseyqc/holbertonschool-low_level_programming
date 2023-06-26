#include "main.h"

/**
* puts2 - prints every other character of a string, starting with the
* first character, followed by a new line
*
* Return: void
*/
void puts2(char *str)
{
	int string;
	int length;

	length = 0;
	while (str[length])
	{
		length = length + 1;
	}
	string = 0;
	while (string < length)
	{
		_putchar(str[string]);
		string = string + 2;
	}
	_putchar('\n');
}
