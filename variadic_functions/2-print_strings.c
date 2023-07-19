#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings followed by a new line
* @separator: the string printed between strings
* @n: the number of strings passed to the function
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		strings = va_arg(args, char*);
		if (strings == NULL)
		{
			printf("(nil)");
		}
		printf("%s", strings);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;
	}
	va_end(args);
	printf("\n");
}
