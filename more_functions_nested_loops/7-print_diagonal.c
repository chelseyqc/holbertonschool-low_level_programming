#include "main.h"

/**
* print_char - prints a character a set number of times
*
* @to_print: the char that is printed
* @number_of_times: the number of times it will print
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
* end_diagonal - prints `\` and a new line
*
* Return: void
*/

void end_diagonal(void)
{
	_putchar('\\');
	_putchar('\n');
}

/**
 * print_diagonal - draws a diagonal line
 * @n: input number
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int current_line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	current_line = 0;
	while (current_line < n)
	{
		print_char(' ', current_line);
		end_diagonal();
		current_line = current_line + 1;
	}
}
