#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all of its parameters
* @n: input number
*
* Return: the sum of parameters, otherwise 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum = sum + va_arg(args, unsigned int);
		i = i + 1;
	}
	va_end(args);
	return (sum);
}
