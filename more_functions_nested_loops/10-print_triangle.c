#include "main.h"

/**
* print_char - prints a character a set number of times
* @to_print: the character to print
* @number_of_times: the number of times to print
*
* Return: void
*/

void print_char(char to_print, int number_of_times)
{
	while (number_of_times > 0)
	{
		_putchar(to_print);
		number_of_times = number_of_times - 1;
	}
}

/**
* print_triangle - prints a triangle followed by a new line
*
* Return: void
*/

void print_triangle(int size)
{
	int current_line;
	int n_spaces;

	current_line = 1;
	n_spaces = size - 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (current_line <= size)
	{
		if (size == 1)
		{
			print_char('#', size);
			_putchar('\n');
		}
		else
		{
			print_char(' ', n_spaces);
			print_char('#', current_line);
			_putchar('\n');
		}
		current_line = current_line + 1;
		n_spaces = n_spaces - 1;
	}
	size = size + 1;
}
