#include "main.h"

/**
* print_char - prints a character a set number of times
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
* print_square - prints a square
* @size: size of the square
*
* Return: void
*/

void print_square(int size)
{
	int number_of_lines;

	number_of_lines = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}

	while (number_of_lines < size)
	{
		print_char('#', size);
		_putchar('\n');
		number_of_lines = number_of_lines + 1;
	}
}
