#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers followed by a new line
* @separator: the string to be printed between numbers
* @n: number of integers passed to the function
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int numbers;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		numbers = va_arg(args, unsigned int);
		printf("%d", numbers);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;
	}
	va_end(args);
	printf("\n");
}
