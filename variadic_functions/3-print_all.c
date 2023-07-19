#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
* print_char - prints a char
* @args: va_list struct
*
* Return: void
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
* print_int - prints an int
* @args: va_list struct
*
* Return: void
*/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
* print_float - prints a float
* @args: va_list struct
*
* Return: void
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
* print_str - prints a string
* @args: va_list struct
*
* Result: void
*/
void print_str(va_list args)
{
	char *str = va_arg(args, char*);

	str == NULL ? printf("(nil)") : printf("%s", str);
}

/**
* print_all - prints anything
* @format: a list of the types of arguments passed to the function
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	int format_index;
	int spec_index;
	va_list args;

	type prntz[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);
	format_index = 0;
	while (format != NULL && format[format_index] != '\0')
	{
		spec_index = 0;
		while (prntz[spec_index].f_type != NULL)
		{
			if (*prntz[spec_index].f_type == format[format_index])
			{
				(prntz[spec_index].f)(args);
				if (format[format_index + 1] != '\0')
				{
					printf(", ");
				}
			}
			spec_index = spec_index + 1;
		}
		format_index = format_index + 1;
	}
	va_end(args);
	printf("\n");
}
